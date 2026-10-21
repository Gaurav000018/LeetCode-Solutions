class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
            int n=intervals.size();
            int c=0;
            sort(intervals.begin(),intervals.end());
            if(n==0){
                return 0;
            }
            int end=intervals[0][1];
            for(int i=1;i<n;i++){
                if(intervals[i][0]>=end){
                    end=intervals[i][1];
                }else{
                    c++;
                    end=min(end,intervals[i][1]);
                }
            }
            return c;
    }
};