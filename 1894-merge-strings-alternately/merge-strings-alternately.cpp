class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1=word1.size();
        int n2=word2.size();
        string ans="";
        if(n1>=n2){
            int j;
            for(int i=0;i<n2;i++){
                ans=ans+word1[i];
                ans=ans+word2[i];
                j=i;
            }
            j++;
            while(j!=n1){
                ans=ans+word1[j];
                j++;
            }
        }
        else if(n2>n1){
            int j;
            for(int i=0;i<n1;i++){
                ans=ans+word1[i];
                ans=ans+word2[i];
                j=i;
            }
            j++;
            while(j!=n2){
                ans=ans+word2[j];
                j++;
            }
        }
        return ans;
    }
};