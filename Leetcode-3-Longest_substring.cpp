#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> charIndex;
        int maxLength = 0, left = 0;

        for (int right = 0; right < s.length(); ++right) {
            char current = s[right];
            if (charIndex.find(current) != charIndex.end() && charIndex[current] >= left) {
                left = charIndex[current] + 1;
            }
            charIndex[current] = right;
            maxLength = max(maxLength, right - left + 1);
        }
        return maxLength;
    }
};
