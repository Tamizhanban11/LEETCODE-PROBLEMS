class Solution {
public:
       bool isprefixandsuffix( string a, string b){
            int n,m;
            n=a.size()-1;
            m=b.size()-1;
            if(n>m){
                return false;
            }
            else{
                if((b.find(a)==0)&&(b.find(a,m-n)==m-n)){
                   return true;
                }
                else{
                    return false;
                }
            }
        }

    int countPrefixSuffixPairs(vector<string>& words) {
        int i=0,j=i+1,count=0;
        bool c= true;
        while(i<j && j<words.size() && i<words.size()-1){

            if((j==words.size()-1)){
                if((i<words.size()-1)){
                    c= isprefixandsuffix(words[i],words[j]);
                    if(c==true){
                    count++;
                 }
                }
                i++;
               j=i+1;
            }
           
            else{
               c= isprefixandsuffix(words[i],words[j]);
               if(c==true){
                count++;
               }
               ++j; 
            }
        }
        return count;
        
    }
};