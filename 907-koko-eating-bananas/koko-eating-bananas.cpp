class Solution {
public:
    int findmax(vector<int>& piles){
        int maxi=INT_MIN;
        for(auto it:piles){
            maxi=max(maxi,it);
        }
        return maxi;
    }
    long long totaltime(vector<int>& piles,int hourly){
        long long totalh=0;
        int n=piles.size();
        for(int i=0;i<n;i++){
            totalh+=ceil((double)piles[i]/(double)hourly);
        }
        return totalh;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int low=1,high=findmax(piles);
        int ans;
        while(low<=high){
            int mid=(low+high)/2;
            if(totaltime(piles,mid)<=h){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};