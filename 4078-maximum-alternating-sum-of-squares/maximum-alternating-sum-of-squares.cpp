class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long ans=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            nums[i]=abs(nums[i]);
        }
        sort(nums.begin(),nums.end());
        if(n%2==1){
            for(int i=0;i<n/2;i++){
                ans=ans-nums[i]*nums[i];
            }
            for(int i=(n/2);i<n;i++){
                ans=ans+nums[i]*nums[i];
            }
        }
        else{
            for(int i=0;i<n/2;i++){
                ans=ans-nums[i]*nums[i];
            }
            for(int i=(n/2);i<n;i++){
                ans=ans+nums[i]*nums[i];
            }
        }
        return ans;
    }
};