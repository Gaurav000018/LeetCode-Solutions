class Solution {
public:
    bool search(vector<vector<char>>& board, string & word,int row,int col,int index){
        // int n=board.size();
        if(index==word.size()){
            return true;
        }
        if(row<0 || col<0 ||
        col>=board[0].size() || 
        row>=board.size() || board[row][col]!=word[index]){
            return false;
        }
        char temp=board[row][col];
        board[row][col]='#';
        bool res= search(board,word,row+1,col,index+1)||
                  search(board,word,row-1,col,index+1)||
                  search(board,word,row,col+1,index+1)||
                  search(board,word,row,col-1,index+1);
        board[row][col]=temp;
        return res;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(search(board,word,i,j,0)){
                    return true;
                }
            }
        }
        return false;
        
    }
};