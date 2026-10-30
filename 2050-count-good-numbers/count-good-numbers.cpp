
class Solution {
public:
    long long mod = 1e9 + 7;

    long long power(long long a, long long b) {
        if (b == 0) return 1;

        long long half = power(a, b / 2);

        long long ans = (half * half) % mod;

        if (b % 2 == 1) {
            ans = (ans * a) % mod;
        }

        return ans;
    }

    int countGoodNumbers(long long n) {
        long long a = power(5, (n + 1) / 2);
        long long b = power(4, n / 2);

        return (a * b) % mod;
    }
};
