class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>& first = (nums1.size() < nums2.size()) ? nums1 : nums2;
        vector<int>& second = (nums1.size() < nums2.size()) ? nums2 : nums1;

        vector<int> inter;
        for(int i = 0; i < first.size(); i++)
        {
            int repeats = count(inter.begin(), inter.end(), first[i]);
            int counter = 0;
            for(int j = 0; j < second.size(); j++)
            {
                if(first[i] == second[j])
                {
                    if(counter == repeats)
                    {
                        inter.push_back(first[i]);
                    }
                    counter++;
                }
            }
        }
        return inter;
    }
};