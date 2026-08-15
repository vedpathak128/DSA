class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        map<int,int>m;
        for(auto it:nums){
            m[it]++;
        }
        for(auto it:nums){
            if(m[it]>(n/3) && find(ans.begin(),ans.end(),it)==ans.end()) ans.push_back(it);
        }
        return ans;
    }
};