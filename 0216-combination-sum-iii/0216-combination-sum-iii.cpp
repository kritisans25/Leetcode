class Solution {
public:
    void combinationfind(int index,int k,int sum,vector<int>&arr,vector<int>&ds,vector<vector<int>>&ans){
        if(k==0){
            if(sum==0){
                ans.push_back(ds);
            }
            return;
        }
        if(index==arr.size())return;
        if(sum<0)return;
        ds.push_back(arr[index]);
        combinationfind(index+1,k-1,sum-arr[index],arr,ds,ans);
        ds.pop_back();
        combinationfind(index+1,k,sum,arr,ds,ans);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>arr={1,2,3,4,5,6,7,8,9};
        vector<int> ds;
        vector<vector<int>>ans;
        combinationfind(0,k,n,arr,ds,ans);
        return ans;
    }
};