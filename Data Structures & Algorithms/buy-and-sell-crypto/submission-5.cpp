class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int l=0; int r = 1;
        auto max_it = std::max_element(prices.begin(), prices.end());

        int max_price = *max_it;
        auto min_it = std::min_element(prices.begin(), prices.end());

        int min_price = *min_it;
        if((max_price > min_price) && (max_it > min_it))
        {
            
            profit = max_price-min_price;
            return profit;
        }

        while(r < prices.size())
        {
            if(prices[r] > prices[l])
            {
                profit = std::max(profit, prices[r] - prices[l] );
                
            }
            else
            {
                l=r;
                
                
            }
            r=r+1;
            
            
        }
        return profit;

        
        
    }
};
