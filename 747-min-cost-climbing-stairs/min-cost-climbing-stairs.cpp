class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        if(n==0)return 0;
        if(n==1)return cost[0];
     vector<int>dp(n);
     dp[n-1]=cost[n-1];
     dp[n-2]=cost[n-2];
     for(int i = n-3;i>=0;i--){
        dp[i]=cost[i]+min(dp[i+1],dp[i+2]);
        
    }
    return min(dp[0],dp[1]);
    }

};