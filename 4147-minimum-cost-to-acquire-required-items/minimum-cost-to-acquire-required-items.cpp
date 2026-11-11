class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        int min1 = min(need1, need2);
        long long min2 = min((long long)costBoth, (long long)cost1 + cost2);
        long long ans = 0;
        if (min1 == need1) {
            ans += min2 * min1;
            int rem = need2 - need1;
            long long min3 = min(costBoth, cost2);
            ans += min3 * rem;
        } else {
            ans += min2 * min1;
            int rem = need1 - need2;
            long long min3 = min(costBoth, cost1);
            ans += min3 * rem;
        }
        return ans;
    }
};