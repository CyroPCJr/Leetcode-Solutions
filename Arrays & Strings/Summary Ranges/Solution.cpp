class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;
        for (size_t i = 0; i < nums.size();) {
            int start = nums[i];
            while (i < nums.size() - 1 && (nums[i] + 1 == nums[i + 1])) {
                i++;
            }

            if (start != nums[i]) {
                result.push_back(to_string(start) + "->" + to_string(nums[i]));
            } else {
                result.push_back(to_string(nums[i]));
            }
            i++;
        }
        return result;
    }
};