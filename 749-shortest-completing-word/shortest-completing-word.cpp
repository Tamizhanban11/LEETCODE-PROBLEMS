class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        vector<int>v(26, -20);
        int size=0;
        for(char c: licensePlate){
            if(c>=97 && c<=122) {
                if(v[c-97]==-20) {size++; v[c-97]=1; continue;} 
                v[c-97]++;
            }
            else if(c>=65 && c<=90) {
                if(v[c-65]==-20) {size++; v[c-65]=1; continue;}
                v[c-65]++;
            }
        }
        int ans = INT_MAX;
        string word_ans = "";
        for(string word: words){
            for(char c: word){
                if(v[c-97]>-20) {
                    v[c-97]--;
                    if(v[c-97]==0) 
                        size--;
                } 
            }
            if(size==0){
                if(word.size()<ans){
                    ans=word.size();
                    word_ans=word;
                }
            }
            for(char c: word){
                if(v[c-97]==0) size++;
                v[c-97]++;
            }
        }
        return word_ans;
    }
};