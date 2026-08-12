class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size(),cnt=1;
        int l=1;
        int lm=INT_MIN;
        if(n==0) return 0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]-1==lm){
                cnt++;
                lm=nums[i];
            }
            else if(nums[i]!=lm){
                cnt=1;
                lm=nums[i];
            }
            l=max(l,cnt);
           
        }
        return l;
    }
};