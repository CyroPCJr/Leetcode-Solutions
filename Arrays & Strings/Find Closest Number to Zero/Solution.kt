class Solution {
    fun findClosestNumber(nums: IntArray): Int {
       var closest: Int? = null
        for (num in nums) {
            if (closest == null) {
                closest = num
            } else {
                if (abs(num) < abs(closest)) {
                    closest = num
                } else if (abs(num) == abs(closest)) {
                    if (num > closest) {
                        closest = num
                    }
                }
            }
        }
        return closest!!
    }
}
