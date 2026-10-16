class Solution {
public:
    void find_combinations(vector<int>& arr,int ind,int target,vector<int> &ds,vector<vector<int>> &ans){
        sort(arr.begin(),arr.end());
        if(ind==arr.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        if(ind==0){
            if(target>=arr[ind]){
                ds.push_back(arr[ind]);
                find_combinations(arr,ind,target-arr[ind],ds,ans);
                ds.pop_back();
            }
            find_combinations(arr,ind+1,target,ds,ans);
        }
        if(ind>0 && arr[ind]!=arr[ind-1]){
            if(target>=arr[ind]){
                ds.push_back(arr[ind]);
                find_combinations(arr,ind,target-arr[ind],ds,ans);
                ds.pop_back();
            }
            find_combinations(arr,ind+1,target,ds,ans);
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        find_combinations(candidates,0,target,ds,ans);
        return ans;
    }
};