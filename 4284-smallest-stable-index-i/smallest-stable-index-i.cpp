class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int index=-1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int j=0;
            int maxi=INT_MIN,mini=INT_MAX;
            while(j<=i){
                maxi=max(maxi,nums[j]);
                j++;
            }
            j--;
            while(j<n){
                mini=min(mini,nums[j]);
                j++;
            }
            int p=maxi-mini;
            if(p<=k){
                index=i;
                return index;
            }
        }
       
        return index;
        
    }
};