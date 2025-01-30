class Solution {
    fun isPalindrome(s: String): Boolean {
        var leftPos = 0
        var rightPos = s.length - 1

        while (leftPos < rightPos) {
            if (!s[leftPos].isLetterOrDigit()) {
                leftPos++
                continue
            }
            if (!s[rightPos].isLetterOrDigit()) {
                rightPos--
                continue
            }
            if (s[leftPos].lowercaseChar() != s[rightPos].lowercaseChar()) {
                return false
            }
            leftPos++
            rightPos--
        }
        return true
    }
}