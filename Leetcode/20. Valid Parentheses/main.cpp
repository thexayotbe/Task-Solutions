class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> braces = {{')' , '('},{']', '['},{'}', '{'}};
        stack<char> st;
        for(char ch : s){
            if(braces.count(ch)){
                if(!st.empty() && st.top() == braces[ch]){
                    st.pop();
                }
                else {
                    return false;
                }
            }
            else {
                st.push(ch);
            }
            
        }
        return st.empty();
    };
};
