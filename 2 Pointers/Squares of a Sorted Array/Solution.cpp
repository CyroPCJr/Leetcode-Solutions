class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result;
        result.reserve(nums.size());
        for (size_t i = 0; i < nums.size(); ++i) {
            const int square = nums[i] * nums[i];
            result.push_back(square);
        }

        sort(result.begin(), result.end());
        return result;
    }
};