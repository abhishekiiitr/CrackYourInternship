class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int res=0 , b=0;
        for(int i=0 ; i< prices.size();i++){
           if(prices[b]>prices[i]) b=i;
            
            res=max(res ,prices[i]-prices[b]);
           
       } return res;
    }
};
