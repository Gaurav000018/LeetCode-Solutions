class Solution {
public:

    void backtrack(int index,vector<int>&arr,int target,vector<int>&ds,vector<vector<int>>&ans){
        if(target==0){
            ans.push_back(ds);
            return;     
        }
        // if(index==arr.size()){
        //     return;
        // }
        for(int i=index;i<arr.size();i++){
        if(i>index && arr[i]==arr[i-1]){
            continue;
        }
            if(arr[i]>target){
                break;
            }
            ds.push_back(arr[i]);
            backtrack(i+1,arr,target-arr[i],ds,ans);
            ds.pop_back();
        
        }
            
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>arr;
        backtrack(0,candidates,target,arr,ans);
        return ans;
        
    }
};