class Solution {
public:
    string decimalToBinary(int n){
        if(n==0) return "0";
        string res="";
        for(int i = 31; i >= 0; i--){
            if(n%2==1){
                res=res+'1';
            }
            else{
                res=res+'0';
            }
            n=n/2;
        }
        reverse(res.begin(),res.end());
        return res;
    }
    int binaryToDecimal(string binary) {
        int ans = 0;
        int power = 0;
        for (int i = binary.size() - 1; i >= 0; i--) {
            if (binary[i] == '1') {
                ans += (1 << power); 
            }
            power++;
        }

    return ans;
    }
    int reverseBits(int n) {
        string res=decimalToBinary(n);
        reverse(res.begin(),res.end());
        return binaryToDecimal(res);
    }
};