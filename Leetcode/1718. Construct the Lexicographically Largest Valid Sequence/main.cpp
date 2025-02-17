class Solution {
public:
    int numTilePossibilities(string tiless) {
        vector<char> tiles(tiless.begin(), tiless.end());
        sort(tiles.begin(), tiles.end());
        vector<vector<char>> result;
        vector<char> current;
        backtrack(tiles, 0, current, result);
        int sum = 0;

        for (int i = 0; i < result.size(); i++) {
            set<vector<char>> permutaions;
            permutation(result[i], 0, permutaions);
            sum += permutaions.size();
        }
        return sum;
    }
private:
    void backtrack(vector<char>& tiles, int start, vector<char> current, vector<vector<char>>& result) {
        if (!current.empty()) {
            result.push_back(current);
        }
        for (int i = start; i < tiles.size(); i++) {
            if (i > start && tiles[i] == tiles[i - 1]) {
                continue;
            }
            current.push_back(tiles[i]);
            backtrack(tiles, i +1, current, result);
            current.pop_back();
        }
    }
    void permutation(vector<char>& tiles, int start, set<vector<char>>& result) {
        if (start == tiles.size()) {
            if (any_of(tiles.begin(), tiles.end(), [](char c) { return c != ' '; })) {
                result.insert(tiles);
            }
            return;
        }
        for (int i = start; i < tiles.size(); i++) {
            if (tiles[i] == ' ') continue;
            swap(tiles[start], tiles[i]);
            permutation(tiles, start + 1, result);
            swap(tiles[start], tiles[i]);
        }
    }
};

