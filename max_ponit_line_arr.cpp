class Solution {
public:
    int maxPoints(vector<vector<int>>& p) {
       if(p.size()==1) return 1;
        int res=0;
        for(int i=0 ;i<p.size();i++){
            unordered_map<long double , int> mp;
            for(int j=i+1;j<p.size();j++){
                long double dy=p[j][1]-p[i][1];
                long double dx=p[j][0]-p[i][0];
                long double m;
                if(dx==0) m=1e9;
                else m=dy/dx;
                mp[m]++;
                res=max(res,mp[m]);
            }
        } return res+1;
    }
};
