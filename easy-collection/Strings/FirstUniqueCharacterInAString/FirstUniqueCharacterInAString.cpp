class Solution {
public:
    int firstUniqChar(string s) {
        int symbols[26] = {0};
        for(int i = 0; i < s.length(); i++)
        {
            symbols[s[i] - 'a']++;
        }
        for(int i = 0; i < s.length(); i++)
        {
            if(symbols[s[i] - 'a'] == 1)
            {
                return i;
            }
        }
        return -1;
    }
};