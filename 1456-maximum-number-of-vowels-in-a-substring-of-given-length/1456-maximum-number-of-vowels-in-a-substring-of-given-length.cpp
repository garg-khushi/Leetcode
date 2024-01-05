#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int countVowels(char c) {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }

    int maxVowels(string s, int k) {
        int maxVowelCount = 0;
        int currentVowelCount = 0;

        // Calculate vowel count for the first window of size k
        for (int i = 0; i < k; i++) {
            currentVowelCount += countVowels(s[i]);
        }

        maxVowelCount = currentVowelCount;

        // Slide the window through the rest of the string
        for (int i = k; i < s.size(); i++) {
            currentVowelCount += countVowels(s[i]) - countVowels(s[i - k]);
            maxVowelCount = max(maxVowelCount, currentVowelCount);
        }

        return maxVowelCount;
    }
};
