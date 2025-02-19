#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    string getHappyString(int n, int k) {
        int total = 3* pow(2, n-1);
        if (k > total) return "";
        vector<string> resultList;
        generateHappyStrings("", n, k, resultList);

        if (resultList.size() < k) return "";
        return resultList[k-1];

    }
    void generateHappyStrings(string current, int n, int k, vector<string> &resultList) {
        if (current.length() == n) {
            resultList.push_back(current);
            return;
        }
        for (char ch : {'a', 'b', 'c'}) {
            if (current.empty() || current.back() != ch) {
                generateHappyStrings(current+ch, n, k, resultList);
            }
        }
    }

};


int main() {
    Solution sol;
    sol.getHappyString(1, 3);

    return 0;
}