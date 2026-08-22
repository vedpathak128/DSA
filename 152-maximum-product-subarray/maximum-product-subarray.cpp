class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max_product=INT_MIN;
        int n=nums.size();
        int p=1,s=1;
        for(int i=0;i<n;i++){
            if(p==0) p=1;
            if(s==0)s=1;
            p=p*nums[i];
            s=s*nums[n-i-1];
            max_product=max(max_product,max(p,s));
        }
        return max_product;
    }
};