class Solution {
public:
    string summ(string &s){
        int ans=0;
        for(char ch:s){
            ans=ans+(int)(ch-'0');
        }
        return to_string(ans);
    }
    string ans(string &s,int k){
        vector<string> v;
        int n=s.size();
        string sn="";
        string res="";
        for(int i=0;i<n-(n%k);i++){
            sn=sn+s[i];
            if(sn.size()==k){
                v.push_back(sn);
                sn="";
            }
        }
        if((n%k)!=0){
            sn="";
            for(int i=n-(n%k);i<n;i++){
                sn=sn+s[i];
            }
            v.push_back(sn);
        }
        for(int i=0;i<v.size();i++){
            res=res+summ(v[i]);
        }
        return res;
    }
    string digitSum(string s, int k) {
        while(s.size()>k){
            s=ans(s,k);
        }
        return s;
    }
};