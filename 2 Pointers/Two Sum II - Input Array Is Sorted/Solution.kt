class Solution {
    fun twoSum(numbers: IntArray, target: Int): IntArray {
        var leftPos = 0
        var rightPos = numbers.size - 1

        while (leftPos < rightPos){
            val sum = numbers[leftPos] + numbers[rightPos];
            if (sum == target){
                return intArrayOf(leftPos + 1 ,rightPos + 1)
            }else if (sum < target)
            {
                leftPos++
            }else
            {
                rightPos--
            }
        }
        return intArrayOf(0,0)
    }
}