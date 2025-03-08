#include <iostream>
using namespace std;
class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        string window = "";
        int whites = 0;;
        for (int i = 0; i < k; i++) {
            if (blocks[i] == 'W') whites++;
            window+=blocks[i];
        }
        int minWhites = whites;
        for (int i = k; i < blocks.size() ;i++) {
            if (blocks[i] == 'W') {
                whites++;
            }
            if (blocks[i-k] == 'W') whites--;

            minWhites = min(minWhites, whites);
        }
        return minWhites;
    }
};

int main() {
    Solution s;
    string  blocks = "WBBWWBBWBW"; int k = 7;
    cout << s.minimumRecolors(string(blocks), k);
    return 0;
}