class Solution {
public:
    int encrypt(int n){
        int g=0,f=0;
        int a= to_string(n).size();
        while(n!=0){
                int rem=n%10;
                n=n/10;
                g=max(g,rem);
        }
        while(a--){
            f=f*10+g;
        }
        return f;
    }

    int sumOfEncryptedInt(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans=ans+encrypt(nums[i]);
        }
        return ans;
    }
};