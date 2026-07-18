class Solution {
public:
    int partition(vector<int>& arr,int low,int high){
        int randomIndex = low + rand() % (high - low + 1);
        swap(arr[randomIndex], arr[high]);
        int pivot=arr[high];
        int i=low-1;
        for(int j=low;j<high;j++){
            if(arr[j]<pivot){
                i++;
                swap(arr[i],arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]); 
        return i + 1;
    }
    void quicksort(vector<int>&nums,int low,int high){
        if(low<high){
            int pi = partition(nums, low, high);
            quicksort(nums, low, pi - 1);
            quicksort(nums, pi + 1, high);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        quicksort(nums,0,n-1);
        return nums;
    }
};