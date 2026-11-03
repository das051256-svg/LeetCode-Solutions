class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!= t.length())
        return false;
        vector<int> cs(27, 0);
        vector<int> ct(27, 0);
        for(int i=0; i<s.length(); i++){
            cs[s[i]-97]++;
            ct[t[i]-97]++;
        }
        for(int i=0; i<=26; i++){
            if(cs[i]!=ct[i])
            return false;
        }
        return true;
    }
};