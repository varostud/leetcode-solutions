#include <algorithm>
#include <string>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        string s = to_string(x);
        std::reverse(s.begin(), s.end());
        
        try
        {
            return x < 0 ? -stoi(s) : stoi(s); 
        }
        catch(std::out_of_range ex)
        {
            return 0;
        }
    }
};