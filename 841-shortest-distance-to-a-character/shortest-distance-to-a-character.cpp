class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
          vector<int>pos;
          for(int i=0;i<s.size();i++){
              if(s[i]==c){
                  pos.push_back(i);
              }
          }
          vector<int>v;
          for(int i=0;i<s.size();i++){
              int x=INT_MAX;
              for(int j=0;j<pos.size();j++){
                  x=min(x,abs(i-pos[j]));
              }
              v.push_back(x);
          }
          return v;
    }
};