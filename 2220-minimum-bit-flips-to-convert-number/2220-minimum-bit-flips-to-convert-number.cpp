class Solution {
public:
    string decimalToBinary(int n){
        if(n==0) return "0";
        string res="";
        while(n>0){
            if(n%2==1)res=res+'1';
            else{
                res=res+'0';
            }
            n=n/2;
        }
        reverse(res.begin(),res.end());
        return res;
    }
    int minBitFlips(int start, int goal) {
        int x=start^goal;
        string res=decimalToBinary(x);
        int count=0;
        for(int i=0;i<res.size();i++){
            if(res[i]=='1')count++;
        }
        return count;
    }
};