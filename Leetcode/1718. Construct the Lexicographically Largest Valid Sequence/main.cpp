#include <iostream>
using namespace  std;

class Solution {
public:
    int numTilePossibilities(string tiless) {
        int count = 0;
        vector<char> tiles(tiless.begin(), tiless.end());
        vector<vector<char>> result;
        vector<char> current;
        backtrack(tiles, 0, current, result);
        for (int i = 0; i < result.size(); i++) {
            for (int j = 0; j < result[i].size(); j++) {
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
        cout << result.size();

        return count;
    }
private:
    void backtrack(vector<char>& tiles, int start, vector<char> current, vector<vector<char>>& result) {
        result.push_back(current);

        for (int i = start; i < tiles.size(); i++) {
            current.push_back(tiles[i]);
            backtrack(tiles, i +1, current, result);
            current.pop_back();
        }

    }
};


int main () {
    Solution solution;
    string const t = "V";
    cout << solution.numTilePossibilities(t) << endl << endl;
    return 0;
};