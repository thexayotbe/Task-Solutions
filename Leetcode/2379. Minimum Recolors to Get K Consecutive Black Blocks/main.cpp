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

