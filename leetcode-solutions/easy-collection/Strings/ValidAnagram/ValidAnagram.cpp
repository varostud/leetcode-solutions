class Solution {
public:
    bool isAnagram(string s, string t) {
        int symbols[26] = {0}; //only lowcase alphas
        int symbols2[26] = {0};
        
        if(s.length() != t.length()) return false;
        for(int i = 0; i < s.length(); i++)
        {
            symbols[s[i] - 'a']++;
            symbols2[t[i] - 'a']++;
        }
        for(int i = 0; i < 26; i++)
        {
            if(symbols[i] != symbols2[i]) return false;
        }
        return true;
    }
};