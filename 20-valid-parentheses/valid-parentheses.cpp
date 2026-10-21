class Solution {
public:
    bool isValid(string s) {
        stack<char> c;
        c.push(s[0]);
        for(int i=1; i<s.length(); i++){
            if(c.empty() && i>= s.length())
            break;
            else if(c.empty() && i< s.length()){
                c.push(s[i]);
                continue;
            }
            if(c.top()== '(' && s[i]==')')
            c.pop();
            else if(c.top()== '{' && s[i]=='}')
            c.pop();
            else if(c.top()=='[' && s[i]== ']')
            c.pop();
            else
            c.push(s[i]);
        }
        if(c.empty())
        return true;
        else
        return false;
    }
};