class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        map<int,int> m;
        int count=0,ps=0;
        for(int i=0;i<n;i++){
            m[ps]++;
            ps=ps+nums[i];
            if(m.find(ps-k)!=m.end()) count=count+m[ps-k];
        }
        return count;
    }
};