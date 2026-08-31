class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int minIndex=0;
        int maxIndex=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>nums[maxIndex]){
                maxIndex=i;
            }
            if(nums[i]<nums[minIndex]){
                minIndex=i;
            }
        }
        int front=max(maxIndex,minIndex)+1;
        int back=n-min(minIndex,maxIndex);
        int both=min(minIndex,maxIndex)+1+n-max(minIndex,maxIndex);
        return min({front,back,both});

    }
};