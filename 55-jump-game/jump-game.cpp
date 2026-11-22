class Solution {
public:
    bool canJump(vector<int>& nums) {
        int max_ind=0;
        for(int i=0;i<nums.size();i++){
            if(max_ind<i) return false;
            if(i+nums[i]>max_ind) max_ind=i+nums[i];
        }
        if(max_ind<nums.size()-1) return false;
        else return true;
    }
};