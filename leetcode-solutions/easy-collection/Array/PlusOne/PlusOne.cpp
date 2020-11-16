class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int pos = digits.size() - 1;
        bool over = false;

        do
        {
            over = false;
            digits[pos]++;
            if(digits[pos] == 10)
            {
                digits[pos] = 0;
                over = true;
                if(pos == 0)
                {
                    vector<int> rsrv(digits.size() + 1);
                    rsrv[0] = 1;
                    copy(digits.begin(), digits.end(), rsrv.begin() + 1);
                    return rsrv;
                }
                pos--;
            }
        } while(over);
        return digits;
    }
};