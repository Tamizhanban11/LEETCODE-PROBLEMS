class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>>num;
        int size = nums.size();
        for(int i = 0;i<size;i++){
            num.push_back({nums[i],i});
        }
        sort(num.begin(),num.end());
        int low = 0; int high = size-1;
        while(low<high){
            int sum = num[low].first + num[high].first;
            if(sum == target){
                return {num[low].second,num[high].second};
            }
            else if (sum>target){
                high--;
        }
        else {
            low++;
        }
        }
        
        return {};
    
    }
};