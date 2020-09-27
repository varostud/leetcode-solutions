// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int begin = 1;
        int end = n;
        int srch;
        while(end - begin > 1)
        {
            srch = begin + (end - begin) / 2;
            if(isBadVersion(srch))
            {
                end = srch;
            }
            else
            {
                begin = srch;
            }
        }
        return isBadVersion(begin) ? begin : end;
    }
};