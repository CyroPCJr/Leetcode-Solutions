class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int leftPos = 0;
        int rightPos = numbers.size() - 1;

        while (leftPos < rightPos) {
            const int sum = numbers[leftPos] + numbers[rightPos];
            if (sum == target) {
                return {leftPos + 1, rightPos + 1};
            } else if (sum < target) {
                leftPos++;
            } else {
                rightPos--;
            }
        }
        return {0, 0};
    }
};