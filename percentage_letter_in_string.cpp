class Solution {
public:
    int percentageLetter(string s, char letter) {
        int len=s.length();
        int res=0;
        int count=0;
        for(int i=0; i<len; i++){
            if(s[i] == letter) count+=1;
        } res = (count*100)/len;
       
        return res ;
    }
};
