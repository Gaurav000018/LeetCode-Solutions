class Solution {
public:
    // int recursion(int index,int jumps,vector<int>& nums){
    //     if(index>=nums.size()-1) return jumps;
    //     int mini=INT_MAX;
    //     for(int i=1;i<=nums[index];i++){
    //         mini=min(mini,recursion(index+i,jumps+1,nums));
    //     }
    //     return mini;
    // }
    int jump(vector<int>& nums){
        int res=0;
        int l=0,r=0;
        int n=nums.size();
        while(r<n-1){
            int far=0;
            for(int i=l;i<r+1;i++){
                far=max(far,i+nums[i]);
            }
            l=r+1;
            r=far;
            res+=1;
        } 
        return res;
    }
};