class Solution {
public:
    string removeOuterParentheses(string s) {
         int n=s.size();
         string ans="";
         int c=0;
         for(char ch:s){
            if(ch=='('){
                c++;
                if(c>1) ans=ans+"(";
            }
            else{
                c--;
                if(c>0) ans=ans+")";
            }
         }
         return ans;
    }
};