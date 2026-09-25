class Solution {
public:
    void backtrack(int index,string digits,string arr[],string output,vector<string>&ans){
        //yahe be base case
        if(index==digits.length()){
            ans.push_back(output);
            return;
        }


        int d=digits[index]-'0';
        string s=arr[d];
        for(int i=0;i<s.length();i++){
            output.push_back(s[i]);
            backtrack(index+1,digits,arr,output,ans);
            output.pop_back();

        }
        
    }
    vector<string> letterCombinations(string digits) {
        string arr[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string>ans;
        string out="";
        backtrack(0,digits,arr,out,ans);
        return ans;

        
    }
};