class Solution {
public:
    int bouquets(vector<int>& bloomDay,int day,int m,int k){
        int b=0,c=0;
        int n=bloomDay.size();
        for(int i=0;i<n;i++){
            if(bloomDay[i]<=day) c++;
            else{
              b+=(c/k);
              c=0;   
            }
        }
        b+=(c/k);
        return b;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int minn=*min_element(bloomDay.begin(),bloomDay.end());
        int maxi=*max_element(bloomDay.begin(),bloomDay.end());
        int low=minn,high=maxi;
        while(low<=high){
            long long total = 1LL * k * m; 
            if(total>bloomDay.size()) return -1;
            int mid=(low+high)/2;
            if(bouquets(bloomDay,mid,m,k)>=m) high=mid-1;
            else low=mid+1;
        }
        return low;
    }
};