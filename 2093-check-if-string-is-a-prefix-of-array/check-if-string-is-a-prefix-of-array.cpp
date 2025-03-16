class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        int n = words.size();
        string preffix = "";
        for(int i = 0;i<n;i++){
            preffix +=words[i];
            if(preffix == s) return true;
            if(preffix.length()>s.length()) return false;
        }
        return false;
    }
};