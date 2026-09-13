class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.size();
        int m=goal.size();
        if(n!=m) return false;
        string ss=s+s;
        return ss.find(goal)!=string::npos;
    }
};