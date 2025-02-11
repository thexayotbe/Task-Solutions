class Solution {
    public:
        string removeOccurrences(string s, string part) {
            int index = s.find(part);
            cout << index << endl;
            while (index != -1) {
                s.erase(index, part.size());
                index = s.find(part);
            }
            return s;
        }
};