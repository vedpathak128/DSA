class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(sum>9*num) return "";
        int non=sum/9;
        int e=sum%9;
        string ans(non,'9');
        if(e>0) ans+=to_string(e);
        ans+=string(num - ans.size(), '0');
        return ans;

    }
};