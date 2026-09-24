class Solution {
public:
    int sumdigit(int n){
        int temp=n;
        int sum=0;
        while(temp>0){
            int digit=temp%10;
            sum=sum+digit;
            temp=temp/10;
        }
        return sum;
    }
    int smallestIndex(vector<int>& nums) {
           int s=nums.size();
           for(int i=0;i<s;i++){
            if(i==sumdigit(nums[i])){
                return i;
            }
           }
           return -1;
    }
};