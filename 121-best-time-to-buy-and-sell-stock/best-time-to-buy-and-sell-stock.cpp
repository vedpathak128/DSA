class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit=INT_MIN;
        int minn=prices[0];
        int n=prices.size();
        for(int i=1;i<n;i++){
            minn=min(minn,prices[i]);
            int p=prices[i]-minn;
            if(p>0){
                max_profit=max(max_profit,p);
            }
        }
        if(max_profit>0) return max_profit;
        else return 0;
    }
};