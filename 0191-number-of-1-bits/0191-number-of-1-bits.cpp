class Solution {
public:
    string decimalToBinary(int n){
        string res="";
        while(n>0){
            if(n%2==1) res=res+'1';
            else{
                res=res+'0';
            }
            n=n/2;
        }
        reverse(res.begin(),res.end());
        return res;
    }
    int hammingWeight(int n) {
        string result=decimalToBinary(n);
        int count=0;
        for(int i=0;i<result.size();i++){
            if(result[i]=='1'){
                count++;
            }
        }
        return count;
    }
};