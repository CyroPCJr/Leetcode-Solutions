class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int totalSize = nums.size();
        vector<int> result;
        result.reserve(totalSize);

        int leftNumber = 1;
        int rightNumber = 1;

        for (int i = 0; i < totalSize; ++i) {
            result.push_back(leftNumber);
            leftNumber *= nums[i];
        }

        for (int i = totalSize - 1; i >= 0; --i) {
            result[i] *= rightNumber;
            rightNumber *= nums[i];
        }

        return result;
    }
};