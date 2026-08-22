class Solution {
public:
    bool checkDivisibility(int n) {
        int total;
        int sum=0;
        int product=1;
        int temp=n;
        while(temp>0){
            int d=temp%10;
            sum=sum+d;
            product=product*d;
            temp=temp/10;
        }
        total=sum+product;
        if(n%total==0){
            return true;
        }
        else{
            return false;
        }
        
    }
};