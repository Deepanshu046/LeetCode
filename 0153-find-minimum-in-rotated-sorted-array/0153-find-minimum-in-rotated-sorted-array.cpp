class Solution {
public:
    int findMin(vector<int>& nums) {
        int size = nums.size();
        int min = nums[0];
        for(int i = 1 ; i<size; i++){
            if(nums[i]<nums[i-1]){
                min=nums[i];
            }
        }
        return min;
    }
};