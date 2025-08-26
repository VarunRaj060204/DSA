class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxarea=0;
        int maxdiag=0;
        for(auto it:dimensions){
            int len=it[0];
            int wid=it[1];
            int diag=len*len + wid*wid;
            int area=len*wid;
            if(diag>maxdiag){
                maxdiag=diag;
                maxarea=area;
            }
            else if(diag==maxdiag){
                maxarea=max(maxarea,area);
            }
        }
        return maxarea;
    }
};