class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit=0;
        int min_seen=prices[0];
        for(int i=0;i<prices.size();i++){
            if(prices[i]<min_seen){
                min_seen=prices[i];
            }
            if(prices[i]-min_seen>max_profit){
                max_profit=prices[i]-min_seen;
            }
        }
        return max_profit;
    }
};