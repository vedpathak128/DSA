class Solution {
public:
    int summ(vector<int>& nums, int a){
        int s=0;
        for(int i=0;i<nums.size();i++){
            s+=ceil((double)nums[i]/a);
        }
        return s;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size(),ans;
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        while(low<=high){
            int mid=(low+high)/2;
            if(summ(nums,mid)<=threshold){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};