#include <iostream>
#include <unordered_map>
#include <algorithm>  // For std::find
using namespace std;

class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int count = 0;
        long long int n = grid.size();
        unordered_map<string, int> rows;

        for(int i = 0; i < n; i++){
            string row;
            for(int j = 0; j< n; j++){
                row += to_string(grid[i][j]) + ",";
            }
            rows[row]++;
        }
        
        for(int j = 0; j < n; j++){
            string col;
            for(int i = 0; i < n; i++){
                col += to_string(grid[i][j]) + ",";
            }
            if(rows.find(col) != rows.end()){
                count+= rows[col];
            }
        }
        
        return count;
    }
};
int main() {
    Solution s;
    vector<vector<int>> grid = {{3,2,1},{1,7,6},{2,7,7}};
    cout << s.equalPairs(grid)<< endl;
    return 0;
}
