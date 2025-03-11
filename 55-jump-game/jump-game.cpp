class Solution {
public:
    bool canJump(vector<int>& nums) {
        int step =nums[0];
        int n = nums.size();
        for(int i = 1;i<n;i++){
            step--;
            if(step<0)return false;
            if(i==n-1)return true;
            if(nums[i]>step)
                step = nums[i];
            
        }
        return true;
        
    }
};