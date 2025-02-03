class Solution {
    fun longestOnes(nums: IntArray, k: Int): Int {
        var maxWidth = 0
        var leftPos = 0
        var numsZeros = 0

        for (right in nums.indices){
            if (nums[right] == 0)
            {
                numsZeros++
            }

            while(numsZeros > k){
                if (nums[leftPos] == 0){
                    numsZeros--
                }
                leftPos++
            }

            maxWidth = max(maxWidth, right - leftPos + 1)
        }

        return maxWidth;
    }
}