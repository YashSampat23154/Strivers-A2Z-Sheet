// https://www.codingninjas.com/studio/problems/best-time-to-buy-and-sell-stock_6194560?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

int bestTimeToBuyAndSellStock(vector<int>&prices) {
    int profit = 0, minSoFar = INT_MAX; 

    for(int i = 0;i<prices.size(); i++){
        profit = max(profit, prices[i]-minSoFar); 
        minSoFar = min(minSoFar, prices[i]); 
    }

    return profit; 
}

