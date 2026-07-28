class Solution {
public:
    void solve(int index,vector<int>&arr,vector<int>&ds,vector<vector<int>>&ans){
        ans.push_back(ds);
        if(index==arr.size()){
            return;
        }
        for(int i=index;i<arr.size();i++){
            if(i>index && arr[i]==arr[i-1])continue;
            ds.push_back(arr[i]);
            solve(i+1,arr,ds,ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>ds;
        solve(0,nums,ds,ans);
        return ans;
    }
};