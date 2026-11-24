class Solution {
public:
    int maxLength(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
                int g=0,l=1;
                long long p=1;
            for(int j=i;j<nums.size();j++){
                p=p*nums[j];
                g = gcd(g, nums[j]);
                l = lcm(l, nums[j]);
                if(p==g*l){
                    ans=max(ans,j-i+1);
                }
                if(p>25200) break;
            }
        }
        return ans;
    }
};