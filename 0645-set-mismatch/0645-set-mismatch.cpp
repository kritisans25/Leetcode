class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        int duplicate=0;
        unordered_map<int,int>freq;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        for(int x:nums){
            if(freq[x]==2){
                duplicate=x;
            }
        }
        int missing;
        for(int i=1;i<=n;i++){
            if(freq[i]==0){
                missing=i;
            }
        }
        return {duplicate,missing};
    }
};