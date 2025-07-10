#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindromeHelper(int i, const string &s) {
        if (i >= s.size() / 2)
            return true;

        if (s[i] != s[s.size() - i - 1])
            return false;

        return isPalindromeHelper(i + 1, s);
    }

    bool isPalindrome(string s) {
        // Manually clean string (only alphanumeric, lowercase)
        string cleaned = "";
        for (int i = 0; i < s.size(); i++) {
            char c = s[i];
            // Check if alphanumeric
            if ((c >= 'a' && c <= 'z') || 
                (c >= 'A' && c <= 'Z') || 
                (c >= '0' && c <= '9')) {

                // Convert uppercase to lowercase manually
                if (c >= 'A' && c <= 'Z') {
                    c = c + 32;
                }
                cleaned += c;
            }
        }

        return isPalindromeHelper(0, cleaned);
    }
};
