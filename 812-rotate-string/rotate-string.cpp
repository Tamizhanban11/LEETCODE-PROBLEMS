class Solution {
public:
    bool rotateString(string s, string goal) {
    if(s.length()!= goal.length()){
        return false;
    }
    string newstring = s+s;
    return newstring.contains(goal);
        
    }
};