class Solution {
public:
    string smallestPalindrome(string s) {
       unordered_map<char,int>freq;
       for(int i=0;i<s.size();i++){
        freq[s[i]]++;
       }
       char middle='\0';
       for(auto it:freq)
       {
        if(it.second%2!=0){
            middle=it.first;
        }
       }
       string left="";
       for(char ch='a';ch<='z';ch++){
        left+=string(freq[ch]/2,ch);
       }
       string right=left;
       reverse(right.begin(),right.end());
       if(middle!='\0'){
        return left+middle+right;
       }
       else{
        return left+right;
       }
    }
};