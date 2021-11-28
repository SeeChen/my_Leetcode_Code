/*
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
An input string is valid if:
Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
*/
class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        for (int i = 0; i < s.size(); i++) {
            if(s[i] == '(')
                st.push(')');
            else if(s[i] == '{')
                st.push('}');
            else if(s[i] == '[')
                st.push(']');
            else if(st.empty() || st.top() != s[i])
                return false;
            else
                st.pop();
        }
        return st.empty();
    }
};