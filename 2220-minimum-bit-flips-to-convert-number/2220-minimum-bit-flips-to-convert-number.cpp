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
        string st=decimalToBinary(start);
        string g=decimalToBinary(goal);
        if (st.size() < g.size()) {
            st = string(g.size() - st.size(), '0') + st;
        } else if (g.size() < st.size()) {
            g = string(st.size() - g.size(), '0') + g;
        }
        int c=0;
        for(int i=0;i<st.size();i++){
            if(st[i]!=g[i]) c++;
        }
        return c;
    }
};