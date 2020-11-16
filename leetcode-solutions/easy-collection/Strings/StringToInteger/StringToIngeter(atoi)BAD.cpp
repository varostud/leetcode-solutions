class Solution {
public:
    bool isNum(char c)
    {
        return (c >= '0' && c <= '9');
    }
    
    int myAtoi(string str) {
        int sign = 1;
        int entry = 0;
        for(int i = 0; i < str.length(); i++)
        {
            if(str[i] != ' ')
            {
                if(((str[i] == '+') || (str[i] == '-')) && (i + 1 != str.length()) && isNum(str[i + 1]))
                {
                    sign = (str[i] == '-') ? -1 : 1;
                    entry = i + 1;
                } 
                else if(isNum(str[i]))
                {
                    entry = i;
                }
                else
                {
                    return 0;
                }
                break;
            }
        }
        
        //cout << str[entry] << ' ' << sign;
        int res = 0;
        for(int i = entry; i < str.length(); i++)
        {
            if(!isNum(str[i])) break;
            int temp = sign * (str[i] - '0');
            if(res < INT_MIN / 10 || (res == INT_MIN / 10 && temp < -8)) return INT_MIN;
            if(res > INT_MAX / 10 || (res == INT_MAX / 10 && temp > 7)) return INT_MAX;
            res = res * 10 + temp;    
        }
        return res;
    }
};