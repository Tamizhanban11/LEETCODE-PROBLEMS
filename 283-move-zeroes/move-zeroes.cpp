class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        stable_partition(nums.begin(),nums.end(),[](int i){return i ;});
        
    }
};