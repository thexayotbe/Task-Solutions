#include <iostream>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int numberOfSubstrings(string word) {
        int count = 0;
        int aIndex = -1, bIndex = -1, cIndex = -1;

        for (int i = 0; i < word.size(); i++) {
            if (word[i] == 'a') aIndex = i;
            if (word[i] == 'b') bIndex = i;
            if (word[i] == 'c') cIndex = i;

            if (aIndex != -1 && bIndex != -1 && cIndex != -1) {
                count += min({aIndex, bIndex, cIndex}) + 1;
            }
        }

        return count;
    }

};

int main() {
    string  s = "abcabc";
    Solution solution;
    cout << solution.numberOfSubstrings(s) << endl;
    return 0;
}