class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        vector<int>ans1;
        vector<int>ans2;
        for(int i=0;i<intervals.size();i++){
            ans1.push_back(intervals[i][0]);
            ans2.push_back(intervals[i][1]);
        }
        sort(ans1.begin(),ans1.end());
        sort(ans2.begin(),ans2.end());
        int i=0,j=0;
        int group=0;
        int res=0;
        while(i<ans1.size()){
            if(ans1[i]<=ans2[j]){
                group+=1;
                i++;
            }
            else{
                group-=1;
                j++;
            }
            res=max(res,group);
        }
        return res;



    }
};