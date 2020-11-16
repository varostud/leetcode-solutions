#include <vector>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0) return "";
        
        int maxsize = strs[0].length();
        for(int i = 0; i < strs.size(); i++)
        {
            if(strs[i].length() < maxsize) maxsize = strs[i].length();
            if(maxsize == 0) return "";
        }
        
        string prfx = "";
        for(int i = 0; i < maxsize; i++)
        {
            bool eq = true;
            for(int j = 1; j < strs.size(); j++)
            {
                if(strs[j - 1][i] != strs[j][i])
                {
                    eq = false;
                    break;
                }
            }
            if(eq)
            {
                prfx += strs[0][i];
            }
            else break;
        }
        
        return prfx;
    }
};