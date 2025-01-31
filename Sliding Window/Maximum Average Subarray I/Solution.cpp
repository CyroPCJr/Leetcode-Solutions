class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double current_sum = 0.0;

        for (size_t i = 0; i < k; ++i) {
            current_sum += nums[i];
        }

        double max_average = current_sum / k;

        for (size_t i = k; i < nums.size(); ++i) {
            current_sum += nums[i];
            current_sum -= nums[i - k];

            double average = current_sum / k;
            max_average = max(max_average, average);
        }

        return max_average;
    }
};