class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int sol = 0 ;
       for(int item:nums){
        sol^=item;
       }
    return sol;
}
};