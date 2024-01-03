class Solution {
public:
    string reverseWords(string s) {
        string result;
        int i = s.length()-1;

        while(i>=0){
            if(s[i] != ' '){
                int j = i;
                while(i>=0 && s[i] != ' '){i--;}
            result += s.substr(i+1, j-i) + ' ';
            }
            i--;
        }
        result.pop_back();
        return result;
    }
};