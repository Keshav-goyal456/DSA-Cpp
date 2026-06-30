class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();

        int buy=prices[0];

        int maxP=0;

        for(int i=0;i<n;i++){

            if(prices[i]>buy){
                maxP=max(maxP, (prices[i]-buy));
            }

            buy=min(buy, prices[i]);
        }

        return maxP;
    }
};