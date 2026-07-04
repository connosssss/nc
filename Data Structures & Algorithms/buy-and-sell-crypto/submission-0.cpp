class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxnum = 0, maxprofit = 0;

        for(int i = prices.size()-1; i>=0; i--){
            if( prices[i] > maxnum) maxnum = prices[i];
            int profit = maxnum - prices[i];
            if(profit > maxprofit) maxprofit = profit;
        }

        return maxprofit;
    }
};
