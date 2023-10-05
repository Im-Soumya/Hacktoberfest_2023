class Solution {
public:
    bool valid(vector<vector<char>>& board,int r,int c,char val){
        int row=r-r%3;
        int col=c-c%3;
        for(int i=0;i<9;i++){
            if(board[i][c]==val)return false;
        }
        
        for(int i=0;i<9;i++){
            if(board[r][i]==val)return false;
        }
        
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[row+i][col+j]==val)return false;
            }
        }
        
        return true;
    }
    
    bool solve(vector<vector<char>>& board,int i,int j){
        if(i==9)return true;
        if(j==9)return solve(board,i+1,0);
        
        if(board[i][j]!='.'){
            return solve(board,i,j+1);
        }
        for(char c='1';c<='9';c++){
            if(valid(board,i,j,c)){
                board[i][j]=c;
                if(solve(board,i,j+1)==true)return true;
                board[i][j]='.';
            }
        }
        return false;
    }
    
    void solveSudoku(vector<vector<char>>& board) {
        solve(board,0,0);
    }
};
