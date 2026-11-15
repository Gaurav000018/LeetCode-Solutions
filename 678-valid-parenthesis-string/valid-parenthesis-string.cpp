class Solution {
public:

    // RECURSION KE KARAN TLE (T.C=3^N)
    // bool fun(string s,int index,int count){
    //     if(count<0) return false;
    //     if(index==s.length()){
    //          return (count==0);
    //     }
    //     if(s[index]=='('){
    //         return fun(s,index+1,count+1);
    //     }
    //     if(s[index]==')'){
    //         return fun(s,index+1,count-1);
    //     }
    //     // if(s[index]=='*')
    //         return (fun(s,index+1,count+1) || fun(s,index+1,count-1) || fun(s,index+1,count));
        

    // }
    bool fun(string s){
        int min=0,max=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                min+=1;
                max+=1;
            }
            else if(s[i]==')'){
                min-=1;
                max-=1;
            }
            else{
                min-=1;
                max+=1;
            }
            if(min<0) min=0;
            if(max<0) return false;
        }
        return (min==0);
    }
    bool checkValidString(string s) {
        int n=s.length();
        // int c=0;
        // return fun(s,0,c);
        return fun(s);
        
    }
};