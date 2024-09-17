#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs){
    string ans;
    int m=strs[0].size();
    int n=strs.size();
    for(int i=0 ; i<m ; i++){
        char letter=strs[0][i];
        for(int j=0; j<n; j++){
            if(strs[j][i] != letter){
                return ans;
                
            }
            else if(strs[j][i]==letter && j==n-1){
                ans.push_back(letter);
                
            }
        }
    }
    return ans;
}

int main() {
	// your code goes here
    vector<string>arr={"dog","racecar","car"};
    string ans = longestCommonPrefix(arr);
    if(ans.size() == 0){
        cout<<" ";
    }
    for(int i=0 ; i<ans.size() ; i++){
        cout<<ans[i];
    }
}
