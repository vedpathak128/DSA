class Solution {
public:
    bool checkString(string s) {
        bool got_b=false;
        for(int i=0;i<s.size();i++){
            if(s[i]=='b') got_b=true;
            if(s[i]=='a'&& got_b==true) return false;
        }
        return true;
    }
};