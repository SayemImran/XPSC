#include <bits/stdc++.h>
using namespace std;

int countAnagramOccurrences(string s, string str)
{
    int lenS = s.length();
    int lenStr = str.length();

    if (lenS < lenStr)
        return 0;

    vector<int> targetFreq(26, 0), windowFreq(26, 0);

    for (char ch : str)
        targetFreq[ch - 'a']++;

    // First window
    for (int i = 0; i < lenStr; i++)
    {
        windowFreq[s[i] - 'a']++;
    }

    int count = 0;
    if (windowFreq == targetFreq)
        count++;

    // Sliding the window
    for (int i = lenStr; i < lenS; i++)
    {
        // Remove leftmost
        windowFreq[s[i - lenStr] - 'a']--;
        // Add current character
        windowFreq[s[i] - 'a']++;

        if (windowFreq == targetFreq)
            count++;
    }

    return count;
}

int main()
{
    string s = "aabaabaa";
    string str = "aaba";
    cout << countAnagramOccurrences(s, str) << endl; // Output: 2
    return 0;
}
