class Solution {
public:
    void backtrack(string s,int index,vector<string>&ds,vector<vector<string>>&ans){
        if(s.size()==index){
            ans.push_back(ds);
            return;
        }
        for(int i=index;i<s.size();i++){
            string sub = s.substr(index, i-index+1);
            string p=sub;
            reverse(p.begin(), p.end());
            if(sub==p){
            ds.push_back(sub);
            backtrack(s, i+1, ds, ans);
            ds.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s){
        vector<string>ds;
        vector<vector<string>>ans;
        backtrack(s,0,ds,ans);
        return ans; 
    }
};