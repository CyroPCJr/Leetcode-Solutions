class Solution {
    fun longestCommonPrefix(strs: Array<String>): String {
      strs.sort()
      val prefix = StringBuilder()
      val firstWord = strs[0]
      val lastWord = strs[strs.size - 1]
      for (i in 0 until minOf(firstWord.length, lastWord.length)) {
          if (firstWord[i] == lastWord[i]) {
              prefix.append(firstWord[i])
          } else {
              return prefix.toString()
         }
      }
      return prefix.toString() 
    }
}