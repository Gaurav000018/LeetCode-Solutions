class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long a=0;
        for(int i=0;i<nums.size();i++){
            a=a^nums[i];
        }
        long long  rbit=a&(-a);
        // int rbit=(a&(a-1))^a;
        int l=0,r=0;
        for(int i=0;i<nums.size();i++){
            if(rbit&nums[i]){
                l^=nums[i];
            }else{
                r^=nums[i];
            }
        }
        return {l,r};
        
        
    }
};