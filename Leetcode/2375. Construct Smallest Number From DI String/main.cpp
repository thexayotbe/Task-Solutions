#include  <iostream>
using namespace std;
class Solution {
public:
    string smallestNumber(string pattern) {
        int n = pattern.size();
        stack<int> numbers;
        string result = "";

        for (int i = 1; i <= n+1; i++) {
            numbers.push(i);
            if (i == n+1 || pattern[i-1] == 'I') {
                while (numbers.size()  > 0) {
                    result += to_string(numbers.top());
                    numbers.pop();
                }
            }
        }
        return result;
    }
};
