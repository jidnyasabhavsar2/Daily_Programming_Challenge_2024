#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;


int atMostKDistinct(const string& s, int k) {
    unordered_map<char, int> count;
    int left = 0, total_substrings = 0;
    
    for (int right = 0; right < s.size(); ++right) {
        
        count[s[right]]++;
        while (count.size() > k) {
            count[s[left]]--;
            if (count[s[left]] == 0) {
                count.erase(s[left]);
            }
            left++;
        }
        total_substrings += (right - left + 1);
    }
    
    return total_substrings;
}


int countSubstringsWithKDistinct(const string& s, int k) {
    return atMostKDistinct(s, k) - atMostKDistinct(s, k - 1);
}

int main() {
    cout << countSubstringsWithKDistinct("pqpqs", 2) << endl;
    return 0;
}
