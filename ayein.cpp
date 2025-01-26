class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows); // Initialize the outer vector with numRows
        
        for(int i = 0; i < numRows; i++) {
            ans[i].resize(i + 1); // Resize each row to have 'i + 1' elements
            ans[i][0] = ans[i][i] = 1; // First and last elements of each row are 1
            
            for(int j = 1; j < i; j++) {
                ans[i][j] = ans[i-1][j-1] + ans[i-1][j]; // Calculate intermediate values
            }
        }
        
        return ans;
    }
};
