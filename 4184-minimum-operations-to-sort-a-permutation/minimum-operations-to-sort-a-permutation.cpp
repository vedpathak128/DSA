class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size(),p,cost;
        if(n==1 || n==0) return 0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                p=i;
                break;
            }
        }
        int next = nums[(p + 1) % n];
        bool asc;
        if (next == 1) asc = true;
        else if (next == n - 1) asc = false;
        else return -1;
        for (int i = 0; i < n; i++) {
                int expected;
                if (asc) {
                expected = i;
                }
                else {
                    expected = (n - i) % n;
                }

                if (nums[(p + i) % n] != expected) {
                    return -1;
                }
        }
        if(asc){
            cost=min(p,n-p+2);
        }
        else{
            cost=1+min(n-p-1,p+1);
        }
        return cost;
    }
};