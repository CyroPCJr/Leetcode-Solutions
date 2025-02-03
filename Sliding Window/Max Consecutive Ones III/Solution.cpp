class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int leftPos = 0;
        int maxWidth = 0;
        int numZeros = 0;

        for (size_t r = 0; r < nums.size(); ++r) {
            if (nums[r] == 0) {
                numZeros++;
            }

            while (numZeros > k) {
                if (nums[leftPos] == 0) {
                    numZeros--;
                }
                leftPos++;
            }

            int currentWidth = r - leftPos + 1;
            maxWidth = max(maxWidth, currentWidth);
        }
        return maxWidth;
    }
};