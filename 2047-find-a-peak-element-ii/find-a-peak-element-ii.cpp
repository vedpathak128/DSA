class Solution {
public:
    int max_element(vector<vector<int>>& mat,int col,int n,int m){
        int max_value=-1;
        int index=-1;
        for(int i=0;i<m;i++){
            if(max_value<mat[i][col]){
                max_value=mat[i][col];
                index=i;
            }
        }
        return index;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int low=0,high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            int maxi=max_element(mat,mid,n,m);
            int left= mid-1>=0 ? mat[maxi][mid-1]:-1;
            int right=mid+1<n ? mat[maxi][mid+1]:-1;
            if(mat[maxi][mid]>left&&mat[maxi][mid]>right) return {maxi,mid};
            else if(mat[maxi][mid]<left) high=mid-1;
            else low=mid+1;
        }
        return {-1,-1};
    }
};