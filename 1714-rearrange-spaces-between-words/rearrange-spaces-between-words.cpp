class Solution {
public:
    string reorderSpaces(string text) {
        text+=' ';
        string s= "";
        vector <string> v;
        bool b= false;
        int count= 0;
        for(int i=0; i<text.size(); i++){
            if(text[i]== ' '){
                count++;
                if(b){
                    v.push_back(s);
                    b= false;
                    s= "";
                }
            }
            else{
                b= true;
                s.push_back(text[i]);
            }
        }
        int words= 0;
        int n= 0;
        while(n<text.length()){
            if(text[n]== ' ')
            n++;
            else{
                while(text[n]!=' '){
                    n++;
                    if(n>=text.length())
                    break;
                }
                words++;
            }
        }
        if(words==1){
            int space= count-1;
            s+=v[0];
            while(space!=0){
                s+=' ';
                space--;
            }
            return s;
        }
        int equal= (count-1)/(words-1);
        int extra= (count-1)%(words-1);
        int space= equal+ extra;
        for(int i=0; i<v.size()-1; i++){
            s+= v[i];
            int e= equal;
            while(e!=0){
                s+=' ';
                e--;
            }
        }
        s+=v[v.size()-1];
        while(extra!=0){
            s+=' ';
            extra--;
        }
        return s;
    }
};