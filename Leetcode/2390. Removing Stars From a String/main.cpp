class Solution {
public:
    string removeStars(string s) {
        string str = "" ;
        stack<char> strr;
        int n = s.size();
        for(int i = 0; i < n;i++){
            if(s[i] != '*'){
                str.push_back(s[i]);
            }
            else{
                str.pop_back();
            }
        }
        
        while(!strr.empty()){
            str += strr.top();
            strr.pop();
        }
        return str;
    }
};

