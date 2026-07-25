class Solution {
public:
    int maxProduct(int n) {
        int largest=-1;
        int secondlargest=-1;
        int temp=n;
        while(temp>0){
            int r=temp%10;
            if(r>largest){
                secondlargest=largest;
                largest=r;
            }
            else if(r>secondlargest){
                secondlargest=r;
            }
            temp=temp/10;
        }
        return largest*secondlargest;
    }
};