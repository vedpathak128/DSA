class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.rbegin(),nums.rend());
        int ans=0;
        for(int i=1;i<nums.size();i++){
            ans=ans+(nums[0]-nums[i]);
        }
        return ans;
    }
};