class Solution {
public:
    // bool iscondition(int row,int col,int n,vector<string>&ds1){
    //     int dupcol=col;
    //     int duprow=row;
    //     while(row>=0 && col>=0){
    //         if(ds1[row][col]=='Q') return false;
    //         row--;
    //         col--;
    //     }
    //     col=dupcol;
    //     row=duprow;
    //     while(col>=0){
    //         if(ds1[row][col]=='Q') return false;
    //         col--;
    //     }
    //     col=dupcol;
    //     row=duprow;
    //     while(row<n && col>=0){
    //         if(ds1[row][col]=='Q') return false;
    //         col--;
    //         row++;
    //     }
    //     return true;

    // }
    // void backtracking(int col,int n,vector<string>&ds,vector<vector<string>>&ans){
    //     if(col==n){
    //         ans.push_back(ds);
    //         return;
    //     }
    //     for(int row=0;row<n;row++){
    //         if(iscondition(row,col,n,ds)){
    //             ds[row][col]='Q';
    //             cout<<"x";
    //             backtracking(col+1,n,ds,ans);
    //             ds[row][col]='.';
    //         }
    //     }
    // }
    void backtrack(int col,int n,
    vector<int>&leftrow,vector<int>&lower,vector<int>&upper,vector<string>&ds,vector<vector<string>>&ans
    ){
        if(col==n){
            ans.push_back(ds);
            return;
        }
        for(int row=0;row<n;row++){
            if(leftrow[row]==0 && lower[row+col]==0 && upper[n-1+col-row]==0){
                ds[row][col]='Q';
                leftrow[row]=1;
                lower[row+col]=1;
                upper[n-1+col-row]=1;
                backtrack(col+1,n,leftrow,lower,upper,ds,ans);
                ds[row][col]='.';
                leftrow[row]=0;
                lower[row+col]=0;
                upper[n-1+col-row]=0;
            }
            
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>box(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            box[i]=s;
        }
        // backtracking(0,n,box,ans);
        // return ans;
        vector<int>leftRow(n,0);
        vector<int>upperDiagonal(2*n-1,0);
        vector<int>lowerDiagonal(2*n-1,0);
        backtrack(0,n,leftRow,lowerDiagonal,upperDiagonal,box,ans);
        return ans;
    }
};