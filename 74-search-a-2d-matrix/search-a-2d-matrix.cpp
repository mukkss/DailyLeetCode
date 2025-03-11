class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < matrix[i].size(); j++) {  // Use matrix[i].size() for correct column count
                if (matrix[i][j] == target) {
                    return true;
                }
            }
        }
        return false; 
    }
};