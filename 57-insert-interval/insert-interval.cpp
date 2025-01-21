class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>&a, vector<int>& b) {
        a.push_back({b});
        sort(a.begin(), a.end());
        int j = 0;
        int n = a.size();
        for(int i = 0;i<n;i++){
            if(a[j][1] >= a[i][0]){
                a[j][1] = max(a[j][1],a[i][1]);
            }
            else {
                j++;
                a[j]= a[i];
            }
        }
            vector<vector<int>>ans;
            for(int i = 0;i<=j;i++){
                ans.push_back(a[i]);
            }
            return ans;
        }
    
    
};