class Solution {
public:
    void backtrack(int index,vector<int>&arr,vector<int>&ds,vector<vector<int>>&ans){
        if(index==arr.size()){
            ans.push_back(ds);
        }
        if(index==arr.size()){
            return;
        }
        ds.push_back(arr[index]);
        backtrack(index+1,arr,ds,ans);
        ds.pop_back();
        backtrack(index+1,arr,ds,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>arr;
        vector<vector<int>>ans;
        backtrack(0,nums,arr,ans);
        return ans;
        
    }
};