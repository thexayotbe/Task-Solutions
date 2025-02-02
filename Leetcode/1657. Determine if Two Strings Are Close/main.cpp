#include <iostream>
#include <unordered_map>
#include <algorithm>  // For std::find
using namespace std;

class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int> w1Freq(26,0);
        vector<int>w2Freq(26,0);
        
        for(int ch : word1) {
            w1Freq[ch - 'a']++;
        }
        
        for(int ch : word2) {
            w2Freq[ch - 'a']++;
        }
        
        for(int i = 0; i< 26 ; i++){
            if((w1Freq[i] == 0 && w2Freq[i]!=0) || (w2Freq[i] == 0 && w1Freq[i]!=0)){
                return false;
            }
        }
        sort(w1Freq.begin(), w1Freq.end());
        sort(w2Freq.begin(), w2Freq.end());

        for(int i = 0; i < 26; i++){
            if(w1Freq[i]!= w2Freq[i]) {
                return false;
            }
        }
        return true;
    }
};
int main() {
    Solution s;
    string  word1 = "abc", word2 = "bca";
    cout << s.closeStrings(word1, word2) << endl;

   
    return 0;
}
