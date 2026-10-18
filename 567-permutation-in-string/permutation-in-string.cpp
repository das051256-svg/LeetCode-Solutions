class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()> s2.length())
        return false;
        vector <int> v1(26, 0);
        vector <int> v2(26, 0);
        for(int i= 0; i< s1.length(); i++)
        v1[s1[i]- 'a']++;
        for(int i= 0; i<s2.length(); i++)
        v2[s2[i]- 'a']++;
        if(v1== v2)
        return true;
        for(int i=0; i<s2.length(); i++){
            vector <int> v3(26, 0);
            string s= s2.substr(i, s1.length());
            for(int j=0; j<s.length(); j++){
                v3[s[j]-'a']++;
            }
            if(v1==v3)
            return true;
        }
        return false;
    }
};