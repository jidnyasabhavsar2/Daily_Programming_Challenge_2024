// here i used the hashing method.

#include <bits/stdc++.h>
using namespace std;

vector<vector<string>>anagrams(vector<string>arr){
    vector<vector<string>>ans;
    map<string,vector<string>>mpp;
    int n=arr.size();
    for(int i=0 ; i<n ; i++){
      string s = arr[i]; 
      sort(s.begin(),s.end());
      mpp[s].push_back(arr[i]);
    }
    for(auto it:mpp){
        ans.push_back(it.second);
    }
   
    return ans;
}

int main() {
	// your code goes here
	 vector<string>arr = {""};

    vector<vector<string>> ans = anagrams(arr);
    for(int i=0 ; i<ans.size() ; i++){
        for(int j=0 ; j<ans[i].size() ; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
