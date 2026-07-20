class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();

        int f=0;
        int e=nums.size()-1;
        while(f<e)
        {
            swap(nums[f],nums[e]);
            f++;
            e--;
        }
        f=0;
        e=k-1;
        while(f<e)
        {
            swap(nums[f],nums[e]);
            f++;
            e--;
        }
        f=k;
        e=nums.size()-1;
    
        while(f<e)
        {
            swap(nums[f],nums[e]);
            f++;
            e--;
        }
       
        
    }
};