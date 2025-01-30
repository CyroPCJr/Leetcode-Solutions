class Solution {
public:
    bool isPalindrome(string s) {
        int leftPos = 0;
        int rightPos = s.size() - 1;

        while (leftPos < rightPos) {
            
            if (!isalnum(s[leftPos])) {
                leftPos++;
                continue;
            } 
            if (!isalnum(s[rightPos])) {
                rightPos--;
                continue;
            }

            if (tolower(s[leftPos]) != tolower(s[rightPos])) {
                return false;
            }
            
            leftPos++;
            rightPos--;
        }
        return true;
    }
};