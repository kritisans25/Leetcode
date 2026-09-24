class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> missing;
        
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int j = 0;

        for (int i = 1; i <= n; i++) {

            while (j < n && nums[j] < i) {
                j++;
            }

            if (j >= n || nums[j] != i) {
                missing.push_back(i);
            }
        }

        return missing;
    }
};