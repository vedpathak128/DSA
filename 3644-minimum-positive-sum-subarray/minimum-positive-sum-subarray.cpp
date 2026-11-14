class Solution {
public:
    int sum(vector<int>& nums,int i,int j){
        int summ=0;
        for(int a=i;a<=j;a++){
            summ=summ+nums[a];
        }
        return summ;
    }
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int a1=0,a2=0,mins=INT_MAX;
        while(a1<nums.size()){
            if(sum(nums,a1,a2)>0 && (a2-a1+1)>=l && (a2-a1+1)<=r) mins=min(mins,sum(nums,a1,a2));
            a2++;
            if(a2==nums.size()){
                a1++;
                a2=a1;
            }
        }
        if(mins!=INT_MAX) return mins;
        else return -1;
    }
};