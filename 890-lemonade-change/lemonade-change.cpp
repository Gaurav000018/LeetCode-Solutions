class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int a=0;
        int b=0;
        int c=0;
        // sort(bills.begin(),bills.end());
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5){
                a++;
            }
            else if(bills[i]==10){
                if(a>0){
                    a--;b++;
                }
                
                else return false;
            }
            else{
                c++;
                if(b>0 && a>0){
                    b--;a--;
                }
                else if(a>=3){
                    a=a-3; 
                }
                else return false;
            }
        }
        return true;
        
    }
};