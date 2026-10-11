class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>newarr;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                newarr.push_back(nums[i-1]);
            }
        }
        int sumsquare=0;
        for(int i=0;i<newarr.size();i++){
            sumsquare=sumsquare+(newarr[i]*newarr[i]);
        }
        return sumsquare;
    }
};