class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        int maxval=INT_MIN;
        int minval=INT_MAX;
        int instable=0;
        for(int i=0;i<n;i++){
            maxval=max(maxval,nums[i]);
            minval=INT_MAX;
            for(int j=i;j<n;j++){
                minval=min(minval,nums[j]);
            }
            instable=maxval-minval;
            if(instable<=k){
                return i;
            }
        }
        return -1;
    }
};