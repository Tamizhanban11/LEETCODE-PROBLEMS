class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int>set(nums.begin(),nums.end());
        int ans = 0;
        for(auto x:nums){
            int prev = x-1;
            int next = x+1;
            int count = 1;
            set.erase(x);
            while(!set.empty() && set.find(next)!=set.end()){
                set.erase(next);
                next++;
                count++;
            }
            while(!set.empty() && set.find(prev)!=set.end()){
                set.erase(prev);
                prev--;
                count++;
            }
            ans = max(count,ans);
        }
        return ans;
    }
};