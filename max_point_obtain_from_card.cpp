class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int total_pts=0;
        int n=cardPoints.size();
        for(int i=0; i<k; i++){
            total_pts+=cardPoints[i];
        }
        int answer=total_pts ;
        int i=k-1;
        int j=n-1;
        while(i>=0){
            total_pts-=cardPoints[i];
            total_pts+=cardPoints[j];
            answer=max(answer,total_pts);
            i--;
            j--;
        } return answer;
    }
};
