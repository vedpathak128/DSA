class Solution {
public:
    vector<int> generaterow(int row){
        vector<int> ans_row;
        int res=1;
        ans_row.push_back(1);
        for(int i=1;i<row;i++){
            res=res*(row-i);
            res=res/i;
            ans_row.push_back(res);
        }
        return ans_row;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int j=1;j<=numRows;j++){
            ans.push_back(generaterow(j));
        }
        return ans;
    }
};