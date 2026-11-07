class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int start= 0;
        int end= letters.size()-1;
        bool b= false;
        char ans= ' ';
        while(start<= end){
            int mid= start+ (end-start)/2;
            if(letters[mid]> target){
                b= true;
                ans= letters[mid];
                end= mid-1;
            }
            else
            start= mid+1;
        }
        if(b==false)
        return letters[0];
        else
        return ans;
    }
};