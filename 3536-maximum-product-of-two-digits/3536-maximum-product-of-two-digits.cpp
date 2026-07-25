class Solution {
public:
    int maxProduct(int n) {
        vector<int>res;
        int temp=n;
        int max=0;
        while(temp!=0){
            int r=temp%10;
            res.push_back(r);
            temp=temp/10;
        }
        for(int i=0;i<res.size();i++){
            for(int j=i+1;j<res.size();j++){
                int prod=res[i]*res[j];
                if(prod>max){
                    max=prod;
                }
            }
        }
        return max;
    }
};