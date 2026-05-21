class Solution {
public:
    int totalprofit = 0;
    int maxProfit(vector<int>& prices) {
        for(int i=1;i<prices.size();i++){
            if(prices[i]-prices[i-1]>0){
                totalprofit += prices[i]-prices[i-1];
            }
        }
        return totalprofit;
    }
};