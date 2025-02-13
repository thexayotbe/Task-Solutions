// Khayotbek Mamajonov
// DSAI - 02
#include <iostream>
#include <vector>
#include <unordered_map>
#include <stack>
using namespace std;

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
        for (int i = n - 1; i >= 0; --i) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }
        
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main() {
    Solution st;
    vector<int> digits = {1,2,3};
    st.plusOne(digits);
    return 0;
}
