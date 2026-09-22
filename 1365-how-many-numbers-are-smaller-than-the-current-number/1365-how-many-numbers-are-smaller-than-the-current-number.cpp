class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>newarr;
        int n=nums.size();
        int lessthancurr;
        for(int i=0;i<n;i++){
            lessthancurr=0;
            for(int j=0;j<n;j++){
                if(nums[i]>nums[j]){
                    lessthancurr=lessthancurr+1;
                }
            }
            newarr.push_back(lessthancurr);
        }
        return newarr;
    }
};