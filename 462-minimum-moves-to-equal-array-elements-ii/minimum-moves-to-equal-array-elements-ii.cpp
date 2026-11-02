class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size(),median;
        if(n<=1) return 0;
        sort(nums.begin(),nums.end());
        if(n%2==0){
            median=nums[n/2];
        }
        else median=nums[n/2];
        int ans=0;
        for(int i=0;i<n;i++){
            ans=ans+abs(nums[i]-median);
        }
        return ans;
    }
};