#include <iostream>
using namespace std;

class Solution {
public:
    int punishmentNumber(int n) {
        int punishmentNumber  = 0;
        for (int i = 1; i <= n; i++) {
            int squareNum =  i * i;
            string stringNum = to_string(squareNum);
            vector<vector<int>> memoArray(stringNum.size(),
                                          vector<int>(i + 1, -1));

            if (findPunishment(0, 0, stringNum, i, memoArray)) {
                punishmentNumber += squareNum;
            }
        }
        return punishmentNumber;
    }
    bool findPunishment(int startIndex,int sum, string stringNum,  int target, vector<vector<int>>& memo) {
        if (startIndex == stringNum.length()) return sum == target;
        if (sum > target) return false;
        if (memo[startIndex][sum] != -1) return memo[startIndex][sum];

        bool partionFound = false;

        for (int currentIndex = startIndex; currentIndex < stringNum.length(); currentIndex++) {
            string currentString = stringNum.substr(startIndex,  currentIndex - startIndex  + 1);

            int added = stoi(currentString);

            partionFound = partionFound || findPunishment(currentIndex + 1, sum + added, stringNum, target, memo);

            if (partionFound == true) return true;
        }
        return memo[startIndex][sum] = partionFound;
    }
};

int main() {
    Solution solution;
    int n = 10;
    cout << solution.punishmentNumber(n) << endl;
    return 0;
}