// Find the Duplicate number from the array which appears twice or sometimes more than twice.
#include <bits/stdc++.h>
using namespace std;

int find_duplicate(vector<int>arr){
    map<int,int>mpp;
    int ans=-1;
    for(int i=0 ; i<arr.size() ; i++){
        mpp[arr[i]]++;
        if(mpp[arr[i]] >= 2){
            ans=arr[i];
        }
    }
    return ans;
}

int main() {
	// your code goes here
	vector<int>arr={1,3,4,2,2};
	int ans = find_duplicate(arr);
    cout<<ans;
}

// the time complexity is o(nlogn).
