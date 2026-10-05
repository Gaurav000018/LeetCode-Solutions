class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i+=3){
            
            if(nums[i]!=nums[i-1])
                return nums[i-1];
            
            
        }
        return nums[nums.size()-1];

        //THIS WAS USING BITWISE OPERATOR
        // int ans=0;
        // for(int bitindex=0;bitindex<32;bitindex++){
        //     int count=0;
        //     for(int i=0;i<nums.size();i++){
        //         if(nums[i]&(1<<bitindex)){
        //             count++;
        //         }
        //     }
        //     if(count % 3==1){
        //         ans=ans|(1<<bitindex);
        //     }
            
        // }
        // return ans;





        // unordered_map<int,int>freq;
        // for(int i=0;i<nums.size();i++){
        //     freq[nums[i]]++;
        // }
        // for(auto it:freq){
        //     if(it.second<3){
        //         return it.first;
        //     }
        // }
        // return -1;

       
        
        
    }
};