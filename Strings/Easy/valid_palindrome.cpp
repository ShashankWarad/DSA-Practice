class Solution {
    bool pali(string s){
        int i = 0;
        int j = s.length()-1;
        while(i<=j){
            if(s[i] != s[j]){
                return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;
    }
public:
    bool isPalindrome(string s) {
        int i = 0;
        string str="";
        while(i < s.length()){
            if(isalnum(s[i])){
                str += tolower(s[i]);
            }
            i++;
        }
        return pali(str);
    }
};
