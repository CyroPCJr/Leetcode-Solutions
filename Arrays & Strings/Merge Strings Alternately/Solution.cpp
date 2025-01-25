class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        std::string resultStr = "";
        int maxLength = max(word1.length(), word2.length());
        for (size_t i = 0; i < maxLength; ++i) {
            if (i < word1.length()) {
                resultStr += word1[i];
            }

            if (i < word2.length()) {
                resultStr += word2[i];
            }
        }
        return resultStr;
    }
};
