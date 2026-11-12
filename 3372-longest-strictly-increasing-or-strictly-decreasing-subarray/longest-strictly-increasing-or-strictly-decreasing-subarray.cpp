class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int inc=1;
        int max_inc=1,max_dec=1;
        int dec=1;
        int i=1;
        while(i<nums.size()){
            if(nums[i-1]>=nums[i]) inc=1;
            else inc++;
            max_inc=max(max_inc,inc);
            i++;
        }
        int j=1;
        while(j<nums.size()){
            if(nums[j-1]<=nums[j]) dec=1;
            else dec++;
            max_dec=max(max_dec,dec);
            j++;
        }
        return max(max_dec,max_inc);
    }
};