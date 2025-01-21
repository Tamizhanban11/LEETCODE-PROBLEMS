class Solution {
public:
    bool canConstruct(string a, string b) {
        map<char, int>mpp;
        for(int i = 0;i<b.length();i++){
            mpp[b[i]]++;
        }
        for(int i=0;i<a.length();i++){
            if(mpp[a[i]]>0) mpp[a[i]]--;
        
        else return false;
        }
        return true;

        
    }
};