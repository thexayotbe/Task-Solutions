// Mamajonov Khayotbek DSAI - 02
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    string removeStars(string s) {
        string str;
        int n = s.size();
        for(int i = 0; i < n;i++){
            if(s[i] != '*'){
                str+= s[i];
            }
            else {
                str.pop_back();
            }
        }
        return str;
    }
};
int main() {
    Solution s;
    cout << s.removeStars("leet**cod*e") << endl;
    return 0;
}
