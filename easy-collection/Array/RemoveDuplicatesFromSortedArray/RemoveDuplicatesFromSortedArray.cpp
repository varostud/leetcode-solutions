#include <vector>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <iterator>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() != 0)
        {
            vector<int>::iterator first = nums.begin();
            vector<int>::iterator second = first + 1;
            vector<int>::iterator last = nums.end();

            while(second != last)
            {
                if(*first != *second)
                {
                    first++;
                    *first = *second;
                }
                second++;
            }
            nums.erase(++first, nums.end());
        }
        return nums.size();
    }
};

int main()
{
    int a[] = {1, 1, 1, 2, 3, 4, 5, 5, 5, 5, 6, 7, 7};
    vector<int> v(&(a[0]), &(a[13]));
    ostringstream oss;
    copy(v.begin(), v.end(), ostream_iterator<int>(oss, " "));
    cout << oss.str() << "\n";
    Solution s;
    s.removeDuplicates(v);
    oss.str("");
    copy(v.begin(), v.end(), ostream_iterator<int>(oss, " "));
    cout << oss.str();
    return 0;
}
