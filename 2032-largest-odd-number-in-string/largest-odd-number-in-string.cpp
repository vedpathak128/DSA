class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size(),index=-1;
        for(int i=n-1;i>=0;i--){
            if((int)num[i]%2==1){
                index=i;
                break;
            }
        }
        int i=0;
        while(i<n && num[i]=='0') i++;
        return num.substr(i, index - i + 1);
    }
};