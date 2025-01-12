class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        set<string> set;
        for(int i = 0;i<9;i++){
            for(int j = 0;j<9;j++){
                if(board[i][j] != '.'){
                    string row = "row"+to_string(i)+to_string(board[i][j]);
                    string col = "col"+to_string(j)+to_string(board[i][j]);
                int box_num = (i/3)*3+ (j/3);
                string box = "box"+to_string(box_num)+to_string(board[i][j]);
                if(set.count(row) or set.count(col) or set.count(box)){
                    return false;
                }
                else {
                    set.insert(row);
                    set.insert(col);
                    set.insert(box);
                }
                
                }
            }
        }
        return true;
        
    }
};