class Solution {
public:
    string frequencySort(string s) {
        string ans = "";

        pair<int, char> freq[128];

        for (int i = 0; i < 128; i++) {
            freq[i] = {0, (char)i};
        }

        for (char ch : s) {
            freq[ch].first++;
        }

        sort(freq, freq + 128, greater<pair<int, char>>());

        for (int i = 0; i < 128; i++) {
            for (int j = 0; j < freq[i].first; j++) {
                ans += freq[i].second;
            }
        }

        return ans;
    }
};