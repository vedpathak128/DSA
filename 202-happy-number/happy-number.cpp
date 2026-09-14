class Solution {
public:
    bool isHappy(int n) {
        int i=0;
        if(n==1) return true;
        while(n!=1 && i<10000){
            int result=0;
            while(n!=0){
                int rem=n%10;
                n=n/10;
                result=result+(rem*rem);
            }
            if(result==1) return true;
            else n=result;
            i++;
        }
        return false;
    }
};