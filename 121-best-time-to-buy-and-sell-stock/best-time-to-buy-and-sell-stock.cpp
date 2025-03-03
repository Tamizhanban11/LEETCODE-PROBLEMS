class Solution {
public:
    int maxProfit(vector<int>& price) {
        int n = price.size();
        int maxs = -1;
        int mins = price[0];
        for(int i = 0;i<n;i++){
            maxs = max(maxs,price[i]-mins);
            mins = min(mins,price[i]);
        }
        return maxs==-1?0:maxs;
        
    }
};