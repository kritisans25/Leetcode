class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int largest=nums[n-1];
        int count=0;
        for(int i=0;i<n-1;i++){
            count=count+(largest-nums[i]);
        }
        return count;
    }
};