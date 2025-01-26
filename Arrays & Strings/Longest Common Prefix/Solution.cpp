class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string firstWord = strs[0];
        string lastWord = strs[strs.size() - 1];
        string prefix = "";
        for (size_t i = 0; i < min(firstWord.size(), lastWord.size()); ++i) {
            if (firstWord[i] == lastWord[i]) {
                prefix += firstWord[i];
            } else {
                return prefix;
            }
        }
        return prefix;
    }
};