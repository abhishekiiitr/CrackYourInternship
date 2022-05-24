class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int count=0;
        vector<int> v(rocks.size(),-1);
        for(int i=0 ; i< capacity.size() ; i++){
            if(capacity[i]>=rocks[i]){
                v[i]=capacity[i]-rocks[i];
            }
            
           
        } sort(v.begin(),v.end());
        
            for(int i=0;i<rocks.size();i++){
                if(additionalRocks-v[i]>=0 && v[i]) {
                    additionalRocks-=v[i];
                    count++;
                }
                if(v[i]==0) count++;
            }
        return count;
    }
};
