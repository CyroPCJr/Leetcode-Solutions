class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        if (nums.size() < 3) {
            return result;
        }
        sort(nums.begin(), nums.end());
        const int size = nums.size();
        result.reserve(size);
        for (auto i = 0; i < size; ++i) {
            if (nums[i] > 0) {
                break;
            } else if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            int leftPos = i + 1;
            int rightPos = size - 1;

            while (leftPos < rightPos) {
                int sum = nums[i] + nums[leftPos] + nums[rightPos];
                if (sum == 0) {
                    result.push_back({nums[i], nums[leftPos], nums[rightPos]});
                    leftPos++;
                    rightPos--;

                    while (leftPos < rightPos &&
                           nums[leftPos] == nums[leftPos - 1]) {
                        leftPos++;
                    }

                    while (leftPos < rightPos &&
                           nums[rightPos] == nums[rightPos + 1]) {
                        rightPos--;
                    }
                } else if (sum < 0) {
                    leftPos++;
                } else {
                    rightPos--;
                }
            }
        }

        return result;
    }
};