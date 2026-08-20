class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int>arr=nums;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            int temp=arr[0];
            arr.erase(arr.begin());
            arr.push_back(temp);
            if(arr==nums){
                return true;
            }
        }
        return false;
    }
};