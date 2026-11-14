class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int f=0,t=0,tw=0;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5) f++;
            else if(bills[i]==10){
                if(f<1) return false;
                else{
                    f--;
                    t++;
                }
            }
            else{
                if(f>0 && t>0){
                    t--;
                    f--;
                    tw++;
                }
                else if(f>=3){
                    f=f-3;
                    tw++;
                }
                else return false;
            }
        }
        return true;
    }
};