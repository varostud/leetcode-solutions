class Solution {
public:
    bool isPalindrome(string s) {
        if(s.length() == 0) return true;
        
        string newstr = "";
        for(int i = 0; i < s.length(); i++)
        {
            char c = tolower(s[i]);
            if((c >= 97 && c <= 122) || (c >= 48 && c <= 57))
            {
                newstr += c;
            }
        }
        //if(s.length() == 0) throw std::length_error("zero length of string"); 
        if(newstr.length() == 0) return true;
        
        for(int i = 0; i < newstr.length() - 1; i++)
        {
            if(newstr[i] != newstr[newstr.length() - 1 - i]) return false;
        }
        return true;
    }
};