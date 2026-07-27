class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProd=-1;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                int prod=(nums[i]-1)*(nums[j]-1);
                if(prod>maxProd){
                    maxProd=prod;
                }
            }
        }
        return maxProd;
    }
};