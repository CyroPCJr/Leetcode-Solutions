class Solution {
    fun findMaxAverage(nums: IntArray, k: Int): Double {
        var currentSum = 0.0
        
        for (i in 0 until k)
        {
            currentSum += nums[i]
        }

        var maxAverage = currentSum / k

        for (i in k until nums.size){
            currentSum += nums[i]
            currentSum -= nums[i-k]

            maxAverage = max(maxAverage, currentSum / k)
        }

        return maxAverage
    }
}