class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int r=board.size();
        int c=board[0].size();
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                char c=board[i][j];
                if(c!='.'){
                    for(int k=0;k<9;k++){
                        if(k!=i&&board[k][j]==c) return false;
                        if(k!=j&&board[i][k]==c) return false;
                        if((3*(i/3) + k/3)!=i&&(3*(j/3) +k%3)!=j&&board[3*(i/3) + k/3][3*(j/3) +k%3]==c) return false;
                    }
                }
            }
        }
        return true;        
    }
};



