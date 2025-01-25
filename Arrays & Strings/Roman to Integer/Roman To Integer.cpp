class Solution {
public:
    int romanToInt(string s) {
        std::unordered_map<char, int> romanMap = {
            {'I', 1},   {'V', 5},   {'X', 10},  {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}};

        int result = 0;

        for (unsigned int i = 0; i < s.size(); ++i) {
            if (i + 1 < s.size() && romanMap[s[i + 1]] > romanMap[s[i]]) {
                result += romanMap[s[i + 1]] - romanMap[s[i]];
                ++i;
            } else {
                result += romanMap[s[i]];
            }
        }

        return result;
    }
};
