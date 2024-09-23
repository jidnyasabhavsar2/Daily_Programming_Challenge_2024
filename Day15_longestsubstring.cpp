#include <iostream>
#include <unordered_map>
using namespace std;

int lengthOfLongestSubstring(string S) {
    unordered_map<char, int> lastIndex; 
    int maxLength = 0;  
    int start = 0; 

    for (int end = 0; end < S.length(); ++end) {
        char currentChar = S[end];
        if (lastIndex.find(currentChar) != lastIndex.end() && lastIndex[currentChar] >= start) {
            start = lastIndex[currentChar] + 1;
        }
        lastIndex[currentChar] = end;
        maxLength = max(maxLength, end - start + 1);
    }
    return maxLength;
}

int main() {
    string S;
    cin >> S;
    cout << lengthOfLongestSubstring(S) << endl;
    return 0;
}
