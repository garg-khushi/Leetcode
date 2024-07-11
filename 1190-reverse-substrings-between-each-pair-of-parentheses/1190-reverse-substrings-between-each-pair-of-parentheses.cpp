class Solution {
public:
    void reverseSubstring(string &s, int a, int b) {
        while (a < b) {
            char temp = s[a];
            s[a] = s[b];
            s[b] = temp;
            a++;
            b--;
        }
    }
    
    string reverseParentheses(string s) {
        stack<int> st;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                st.push(i);
            } else if (s[i] == ')') {
                int start = st.top();
                st.pop();
                reverseSubstring(s, start + 1, i - 1);
            }
        }
        
        string result;
        for (char c : s) {
            if (c != '(' && c != ')') {
                result += c;
            }
        }
        
        return result;
    }
};
