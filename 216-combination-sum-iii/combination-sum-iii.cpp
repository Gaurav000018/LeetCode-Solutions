class Solution {
public:
    void bt(int x,int k,int target,vector<int>&arr,vector<int>&ds,vector<vector<int>>&ans){
        if(target==0 && ds.size()==k){
            ans.push_back(ds);
            return;
        }
        if(target<0 || ds.size()>k){
            return;
        }
        for(int i=x;i<arr.size();i++){
            ds.push_back(arr[i]);
            bt(i+1,k,target-arr[i],arr,ds,ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>arr={1,2,3,4,5,6,7,8,9};
        vector<int>ds;
        vector<vector<int>>ans;
        bt(0,k,n,arr,ds,ans);
        return ans;
        
    }
};