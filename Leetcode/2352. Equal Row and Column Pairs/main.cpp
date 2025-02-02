#include <iostream>
#include <map>
#include <unordered_map>
#include <algorithm>  // For std::find
using namespace std;

class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int count = 0;
        map<vector<int>, int> mp;
        int n = grid.size();
        for(int i = 0; i < n; i++){
            mp[grid[i]]++;
        }
        
        for(int i = 0; i < n; i++){
            vector<int> v;
            for(int j = 0; j < n; j++){
                v.push_back(grid[j][i]);
            }
            count+= mp[v];
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
