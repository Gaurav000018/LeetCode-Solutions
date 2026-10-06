class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend== divisor){
            return 1;
        }
        bool sign =true;
        if(dividend>0 && divisor<0) sign=false;
        if(dividend<0 && divisor>0) sign=false;
        long long num=abs((long long)dividend);
        long long  den=abs((long long)divisor);
        long long ans=0;
        while(num>=den){
            int count=0;
            while(num>=(den<<(count+1))){
                count++;
            }
            ans=ans+(1<<count);
            num=num-(den<<count);
        }
        if(ans==(1<<31) && sign) return INT_MAX;
        if(ans==(1<<31) && !sign) return INT_MIN;
        return sign?ans:-ans;

        
    }
};