class Solution {
public:
    bool isPowerOfTwo(int n) {
    //DONG THIS THROUGH BIT MANIPULATION 
    if(n<=0){
        return false;
    }
    if((n & (n-1))==0){
        return true;
    }else
    return false;





//    int ans=1;
//   for(int i=0;i<31;i++){  
//     if(ans==n){
//        return true;   
//     }
//     if(ans<INT_MAX/2)
//     ans=ans*2;    
//   }
//   return false;
        
    }
};