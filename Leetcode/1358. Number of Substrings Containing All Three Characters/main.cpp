#include <iostream>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int numberOfSubstrings(string word) {
        int count = 0;
        backtrack(word, 0, count);
        return count;
    }
    void backtrack(const string& word, int start, int& count ) {
        if (start == word.size()) {
            return;
        }
        bool hasA = false, hasB = false, hasC = false;
        for (int i = start; i < word.size(); i++) {
            if (word[i] == 'a') hasA = true;
            if (word[i] == 'b') hasB = true;
            if (word[i] == 'c') hasC = true;
            if (hasA && hasB && hasC) {
                count++;
            }
        }
        backtrack(word, start+1, count);
    }
};

int main() {
    string  s = "abcabc";
    Solution solution;
    cout << solution.numberOfSubstrings(s) << endl;
    return 0;
}