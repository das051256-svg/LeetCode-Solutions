class Solution {
public:
    bool isPalindrome(string s) {
        string temp= "";
        for(int i=0; i<s.size(); i++){
            if(s[i]>='A' && s[i]<='Z'){
                temp+= s[i]-'A'+'a';
            }
            else if((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9')){
                temp+= s[i];
            }
        }
        int start= 0;
        int end= temp.size()-1;
        while(start<end){
            if(temp[start]!= temp[end])
            return false;
            start++;
            end--;
        }
        return true;
    }
};