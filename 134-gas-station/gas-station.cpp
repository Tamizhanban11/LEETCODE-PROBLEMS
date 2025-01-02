class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalLeft = 0;
        int n = gas.size();
        for(int i = 0;i<n;i++){
            totalLeft += gas[i]-cost[i];
        }
            if(totalLeft<0){
                return -1;
            }
        
            int StartIndex = 0;
            int Remaining= 0;
            for(int i = 0;i<n;i++){
                int currentGas = gas[i]+ Remaining;
                int currentCost = cost[i];
                Remaining = currentGas - currentCost;
    
    if(Remaining<0){
        Remaining = 0;
        StartIndex = i+1;
    }

            }

        
        return StartIndex;
    }
        
    
};