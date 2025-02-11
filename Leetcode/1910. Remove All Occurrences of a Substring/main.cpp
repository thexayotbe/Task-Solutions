// Khayotbek Mamajonov
// DSAI - 02
#include <iostream>
#include <vector>
#include <string>
using namespace std;


class Solution {
public:
    string removeOccurrences(string s, string part) {
        int index = s.find(part);
        cout << index << endl;
        while(index != -1){
            s.erase(index, part.size());
            index = s.find(part);
        }
        return s;
    }
};

int main() {
    Solution sol;
    string s = "daabcbaabcbc", part = "abc";
    cout << sol.removeOccurrences(s, part);
    return 0;
}
