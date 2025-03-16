class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        int n = words.size();
        string t = "";
        for(int  i = 0;i<n;i++){
            t +=words[i][0];
        }
        return t==s;
        
    }
};