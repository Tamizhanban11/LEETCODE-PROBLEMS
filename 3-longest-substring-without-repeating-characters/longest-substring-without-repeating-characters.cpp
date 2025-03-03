class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>Set;
        int maxLength=0;
    int left = 0;
    int n = s.size();
    for(int right = 0;right<n;right++){
        while(Set.find(s[right])!=Set.end()){
            Set.erase(s[left]);
            left++;
        }
        Set.insert(s[right]);
      maxLength = max(maxLength,right-left+1);
    

    }
    return maxLength;
        
    }
};