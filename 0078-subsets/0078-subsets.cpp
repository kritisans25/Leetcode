class Solution {
public:
    void findSubset(int index,vector<int>&arr,vector<int>&ds,vector<vector<int>>&ans){
        ans.push_back(ds);
        if(index==arr.size()){
            return;
        }
        for(int i=index;i<arr.size();i++){
            ds.push_back(arr[i]);
            findSubset(i+1,arr,ds,ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>ds;
        findSubset(0,nums,ds,ans);
        return ans;
    }
};