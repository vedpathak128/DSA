class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(),s.end());
        int i=0;
        while(s[i]==' ')i++;
        int c=0;
        while(s[i]!=' '& i<s.size()){
            c++;
            i++;
        }
        return c;
    }
};