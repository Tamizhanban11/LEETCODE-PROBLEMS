class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxs = nums[0];
        int size = nums.size();
        for(int i = 0;i<size;i++){
            sum+=nums[i];
            maxs = max(maxs,sum);
        
        if(sum<0)
        sum = 0;
        
    }
    return maxs;
    }
};