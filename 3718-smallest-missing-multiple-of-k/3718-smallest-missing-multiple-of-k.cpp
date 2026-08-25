class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int multiple=k;
        unordered_set<int>st;
        for(int x:nums){
            st.insert(x);
        }
        while(st.find(multiple)!=st.end()){
            multiple=multiple+k;
        }
        return multiple;
    }
};