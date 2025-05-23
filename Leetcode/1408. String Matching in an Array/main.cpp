class Solution {
public:
    vector<string> stringMatching(vector<string> &words) {
        vector<string> result;
        for (int i = 0; i < words.size(); i++) {
            for (int j = 0; j < words.size(); j++) {
                if (words[j].length() > words[i].length() && words[j].find(words[i]) != string::npos && count(
                        result.begin(), result.end(), words[i]) == 0) {
                    result.push_back(words[i]);
                    break;
                }
            }
        }
        return result;
    }
};

