class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string>words;
        string temp;
        for(int i = 0;i<s.size();i++){
            if(s[i]==' '){
                words.push_back(temp);
                temp.clear();
            }
            else
            {
                temp = temp+s[i];
            }
        }
            words.push_back(temp);
            if(pattern.size()!= words.size()){
                return false;
            }
            unordered_map<char, string>char_to_string;
            unordered_map<string, char>string_to_char;
            
            int n = words.size();
            for(int i = 0;i<n;i++){
                char_to_string[pattern[i]]=words[i];
                string_to_char[words[i]] = pattern[i];
            }
            for(int i = 0;i<n;i++){
                if(char_to_string[pattern[i]]!=words[i]){
                    return false;
                }
                if(string_to_char[words[i]]!=pattern[i]){
                    return false;
                }
        }
        return true;
        
    }
};