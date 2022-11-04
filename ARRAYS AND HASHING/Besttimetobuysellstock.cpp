//Leetcode problem: Best time to buy and sell stock

class Solution{
    public:
    int maxProfit(vector<int>& prices){
        int profit=0;
        for(int i=0;i<prices.size();i++){
            for(int j=i+1;j<prices.size();j++){
                profit=max(profit,prices[j]-prices[i]);
            } 
        }
        return profit;
    }
};

// OR




class Solution{
    public:
    int maxProfit(vector<int>& prices){
        int profit=0;
        int buyIndex=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<prices[buyIndex]){
                buyIndex=i;
            }
            profit=max(profit,prices[i]-prices[buyIndex]);
        }
        return profit;
    }
};