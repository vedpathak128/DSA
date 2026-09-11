class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.size(), m = t.size();
        if (n != m) return false;

        unordered_map<char, char> mapST; 
        unordered_map<char, char> mapTS; 

        for (int i = 0; i < n; i++) {
            char c1 = s[i], c2 = t[i];

            if (mapST.find(c1) == mapST.end() && mapTS.find(c2) == mapTS.end()) {
                
                mapST[c1] = c2;
                mapTS[c2] = c1;
            } else {
                if (mapST[c1] != c2 || mapTS[c2] != c1) {
                    return false;
                }
            }
        }
        return true;
    }
};