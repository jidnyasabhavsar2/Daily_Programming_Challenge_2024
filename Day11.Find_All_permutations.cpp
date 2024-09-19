#include <bits/stdc++.h>
using namespace std;

vector<string>permutation(string &s,int ind,vector<string>&ans){
    if( ind >= s.size() ){
        if (find(ans.begin(), ans.end(), s) == ans.end())
        {
          ans.push_back(s);
          return ans;
        }
    }
    for(int j = ind ; j<s.size() ; j++){
        swap(s[ind],s[j]);
        permutation(s,ind+1,ans);
        swap(s[ind],s[j]);
    }
    return ans;
}


int main() {
	// your code goes here
	string s="abcd";
	int ind=0;
	vector<string>ans;
	ans = permutation(s,ind,ans);
    for(int i=0 ; i<ans.size() ; i++){
        cout<<ans[i]<<" ";
    }
}


// time complexity:o(n!)
// space complexity: o(n*n!)
