class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>rs;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            rs.push_back(sum);
        }
        return rs;
    }
};