class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int pos = m + n - 1;
        int fst = m - 1;
        int snd = n - 1;
        while(fst > -1 && snd > -1)
        {
            cout << pos << " " << fst << " " << snd << endl; 
            nums1[pos--] = (nums1[fst] >= nums2[snd]) ? nums1[fst--] : nums2[snd--];
        }
        while(snd > -1)
        {
            nums1[pos--] = nums2[snd--];
        }
    }
};