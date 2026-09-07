class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0;
        int right=0;
        int n=nums.size();
        int zeroes=0;
        int maxval=0;
        while(right<n){
            if(nums[right]==0){
                zeroes++;
            }
            while(zeroes>k){
                if(nums[left]==0){
                    zeroes--;
                }
                left++;
            }
            int curr=right-left+1;
            maxval=max(maxval,curr);
            right++;
        }
        return maxval;
    }
};