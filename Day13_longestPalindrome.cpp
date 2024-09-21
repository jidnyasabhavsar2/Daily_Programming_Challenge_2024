#include <iostream>
#include <string>
using namespace std;


string expandAroundCenter(const string &s, int left, int right) {
    while (left >= 0 && right < s.length() && s[left] == s[right]) {
        left--;
        right++;
    }
   
    return s.substr(left + 1, right - left - 1);
}

string longestPalindrome(string s) {
    if (s.length() <= 1) return s; 

    string longest = "";
    for (int i = 0; i < s.length(); i++) {
        
        string oddPalindrome = expandAroundCenter(s, i, i);
        if (oddPalindrome.length() > longest.length()) {
            longest = oddPalindrome;
        }

      
        string evenPalindrome = expandAroundCenter(s, i, i + 1);
        if (evenPalindrome.length() > longest.length()) {
            longest = evenPalindrome;
        }
    }

    return longest;
}

int main() {
  string s = "babad";
  string result = longestPalindrome(s);
  cout <<result<< endl; 
}
