class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k %= nums.size();
        vector<int> temp(nums.end() - k, nums.end());
        copy(nums.begin(), nums.end() - k, nums.begin() + k);
        copy(temp.begin(), temp.end(), nums.begin());
    }
};