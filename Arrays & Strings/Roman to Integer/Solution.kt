class Solution {
    fun romanToInt(s: String): Int {
        val romanMap = mapOf('I' to 1, 'V' to 5, 'X' to 10, 'L' to 50, 'C' to 100, 'D' to 500, 'M' to 1000)
        var sum = 0
        var prevValue = romanMap[s[0]] ?: 0

        for (i in 1 until s.length) {
            val currentValue = romanMap[s[i]] ?: 0
            sum += if (currentValue > prevValue) {
                -prevValue
            } else {
                prevValue
            }
            prevValue = currentValue
        }
        sum += prevValue

        return sum
    }
}