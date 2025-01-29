class Solution {
    fun productExceptSelf(nums: IntArray): IntArray {
        val result = IntArray(nums.size) { 1 }
        var leftProduct = 1
        var rightProduct = 1

        for (i in nums.indices) {
            result[i] *= leftProduct
            leftProduct *= nums[i]
        }

        for (i in nums.indices.reversed()) {
            result[i] *= rightProduct
            rightProduct *= nums[i]
        }

        return result
    }
}