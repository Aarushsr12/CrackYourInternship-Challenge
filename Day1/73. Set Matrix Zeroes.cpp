class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> q;
        for(int i=0; i<matrix.size(); ++i){
            for(int j=0; j<matrix[i].size(); ++j){
                if(matrix[i][j] == 0){
                    q.push_back({i,j});
                }
            }
        }
        for(auto it : q){
            vector<int> m = it;
            for(int j = 0; j<matrix[m[0]].size(); ++j){
                matrix[m[0]][j] = 0;
            }
            for(int i =0; i<matrix.size(); ++i){
                matrix[i][m[1]] = 0;
            }
        }
    }
};
