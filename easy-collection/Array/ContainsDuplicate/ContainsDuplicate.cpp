class Solution {
public:   
    bool containsDuplicate(vector<int>& nums) {
        set<int> temp(nums.begin(), nums.end());
        return temp.size() != nums.size();
    }
};