class Solution {
public:
    string clearDigits(string s) {
        string res = "";
        int count = 0;
        for(int i = s.size()-1; i >= 0; i--){
            if(isDig(s[i])){
                s.erase(i,1);
                count++;
                continue;
            }
            if(count > 0){
                s.erase(i,1);
                count--;
            }
            
        }
        return s;
    }
    private: bool isDig(char n){
        return n == '1' || n == '2' || n == '3' || n == '4' || n== '5' || n== '6' || n == '7' || n== '8' || n == '9' || n == '0';
    }
};

