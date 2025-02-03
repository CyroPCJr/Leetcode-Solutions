class Solution {
    fun threeSum(nums: IntArray): List<List<Int>> {
        val result = mutableListOf<MutableList<Int>>()
        if (nums.size < 3) {
            return result
        }

        nums.sort()
        val size = nums.size
        for (i in 0 until size) {
            if (nums[i] > 0) {
                break
            } else if ((i > 0) && (nums[i] == nums[i - 1])) {
                continue
            }

            var leftPos = i + 1
            var rightPos = size - 1

            while (leftPos < rightPos) {
                val sum = nums[i] + nums[leftPos] + nums[rightPos]
                if (sum == 0) {
                    result.add(mutableListOf(nums[i], nums[leftPos], nums[rightPos]))

                    leftPos++
                    rightPos--

                    while (leftPos < rightPos && nums[leftPos] == nums[leftPos - 1]) {
                        leftPos++
                    }

                    while (leftPos < rightPos && nums[rightPos] == nums[rightPos + 1]) {
                        rightPos--
                    }

                } else if (sum < 0) {
                    leftPos++
                } else {
                    rightPos--
                }
            }
        }
        return result
    }
}