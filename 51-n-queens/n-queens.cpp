class Solution {
public:
    bool iscondition(int row,int col,int n,vector<string>&ds1){
        int dupcol=col;
        int duprow=row;
        while(row>=0 && col>=0){
            if(ds1[row][col]=='Q') return false;
            row--;
            col--;
        }
        col=dupcol;
        row=duprow;
        while(col>=0){
            if(ds1[row][col]=='Q') return false;
            col--;
        }
        col=dupcol;
        row=duprow;
        while(row<n && col>=0){
            if(ds1[row][col]=='Q') return false;
            col--;
            row++;
        }
        return true;

    }
    void backtracking(int col,int n,vector<string>&ds,vector<vector<string>>&ans){
        if(col==n){
            ans.push_back(ds);
            return;
        }
        for(int row=0;row<n;row++){
            if(iscondition(row,col,n,ds)){
                ds[row][col]='Q';
                cout<<"x";
                backtracking(col+1,n,ds,ans);
                ds[row][col]='.';
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
        backtracking(0,n,box,ans);
        return ans;
        
    }
};