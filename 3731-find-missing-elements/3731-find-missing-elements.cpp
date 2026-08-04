class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int>newnums;
        vector<int>missing;
        int min=nums[0];
        int max=nums[n-1];
        for(int i=min;i<=max;i++){
            newnums.push_back(i);
        }
        int i=0;
        int j=0;
        while(i<newnums.size() && j<nums.size()){
            if(newnums[i]==nums[j]){
                i++;
                j++;
            }
            else{
                missing.push_back(newnums[i]);
                i++;
            }
        }
        return missing;
    }
};