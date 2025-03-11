#include <iostream>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int numberOfSubstrings(string word) {
        int frequencies[2][128] = {};
        frequencies[0]['a'] = 1;
        frequencies[0]['b'] = 1;
        frequencies[0]['c'] = 1;
        int response = 0;
        vector<string> res = generateParenthesis(word);

        for (int i = 0; i < res.size(); i++) {
             cout << res[i] << endl;
        }

        return response;
    }
    void backtrack(int i, string& word, vector<string>& words, string& subset) {
        if (i == word.size()) {
            if (subset.size() >=3) {
                words.push_back(subset);
            }
            return;
        }
        subset.push_back(word[i]);
        backtrack(i+1, word, words, subset);
        subset.pop_back();
        backtrack(i+1, word, words, subset);
    }

    vector<string> generateParenthesis(string& word) {
        vector<string> result;
        string subset;;
        backtrack(0, word, result, subset);
        return result;
    }
};

int main() {
    string  s = "abcabc";
    Solution solution;
    cout << solution.numberOfSubstrings(s) << endl;
    return 0;
}