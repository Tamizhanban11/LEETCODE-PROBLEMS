class Solution {
public:
    int minElement(vector<int>& nums) {
        int ans=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int n=nums[i];
            int digit_sum=0;
            while(n>0){
                digit_sum+=n%10;
                n/=10;
            }
            if(digit_sum<ans) ans=digit_sum;
        }
        return ans;
    }
};