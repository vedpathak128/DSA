class Solution {
public:
    int maxDepth(string s) {
        int count=0,ans=INT_MIN;
        for(char ch:s){
            if(ch=='('){
                count++;
                ans=max(ans,count);
            }
            else if(ch==')') count--;
            else count=count;
        }
        if(ans>=1) return ans;
        else return 0;
    }
};