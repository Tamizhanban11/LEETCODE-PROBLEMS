class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int start = 0; 
        int end = 0; 
        int countw = 0;
        int  ans = INT_MAX;
        while(start<blocks.size()){
            if(blocks[start] == 'W'){
                countw++;
            }
            if(start - end+1==k){
                ans = min(ans,countw);
                if(blocks[end]=='W')countw--;
                end++;
            }
            start++;
            
        }
        return ans;
        
    }
};