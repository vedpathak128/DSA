
class Solution {
public:
    double power(double x, long long n) {
        if (n == 0) return 1;
        double half = power(x, n / 2);
        if (n % 2 == 0) return half * half;
        return half * half * x;
    }
    double myPow(double x, int n) {
        long long e = n;
        if (e < 0) return 1.0 / power(x, -e);   
        return power(x, e);
    }
};