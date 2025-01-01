class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int leftPointer = 0;
        for(int rightPointer = 0;rightPointer<nums.size();rightPointer++){
            if(nums[rightPointer]!=val){
                nums[leftPointer++] = nums[rightPointer];

            }
        }
        return leftPointer;
        
    }
};