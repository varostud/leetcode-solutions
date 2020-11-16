class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle == "") return 0;
        if(haystack.length() < needle.length()) return -1;
        
        for(int i = 0; i < haystack.length(); i++)
        {
            if(haystack[i] == needle[0] && haystack.length() - i >= needle.length())
            {
                if(needle.length() == 1) return i;
                
                int id = i;
                int count = 1;
                for(int j = id + 1; j < haystack.length(); j++)
                {
                    if(haystack[j] == needle[count])
                    {
                        count++;
                        if(count == needle.length()) return id;
                    }
                    else break;
                }
            }
        }
        
        return -1;
    }
};