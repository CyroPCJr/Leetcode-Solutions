class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        std::string resultStr = "";
        unsigned int i = 0;
        while (i < word1.length() || i < word2.length())
        {
            if (i < word1.length())
            {
                resultStr += word1[i];
            }

            if(i < word2.length())
            {
                resultStr += word2[i];
            }
            ++i;
        }
        return resultStr;
    }

};