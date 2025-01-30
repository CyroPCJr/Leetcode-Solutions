harlclass Solution {
    fun sortedSquares(nums: IntArray): IntArray {
        var left = 0
        var right = nums.size - 1
        val result = IntArray(nums.size)
        var index = nums.size - 1

        while (left <= right) {
            val leftSquare = nums[left] * nums[left]
            val rightSquare = nums[right] * nums[right]
            if (leftSquare > rightSquare) {
                result[index--] = leftSquare
                left++
            } else {
                result[index--] = rightSquare
                right--
            }
        }
        return result
    }
}