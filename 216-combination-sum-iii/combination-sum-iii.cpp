class Solution {
public:
    void solution(int k,int n,vector<int>&ds,vector<vector<int>> &ans,vector<int> arr,int ind,int sum){
        if(ind==9){
            if(ds.size()==k && sum==n){
                ans.push_back(ds);
                return;
            }
            return;
        }
        ds.push_back(arr[ind]);
        solution(k,n,ds,ans,arr,ind+1,sum+arr[ind]);
        ds.pop_back();
        solution(k,n,ds,ans,arr,ind+1,sum);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>ds;
        vector<vector<int>> ans;
        vector<int> arr={1,2,3,4,5,6,7,8,9};
        solution(k,n,ds,ans,arr,0,0);
        return ans;
    }
};