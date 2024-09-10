#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
	int n=nums.size();
	int xor1=0;
	int xor2=0;
	int ans;
	for(int i=0 ; i<n ; i++){
	    xor1=xor1^nums[i];
	    xor2=xor2^(i+1);
	    
	    
	}
	xor2=xor2^(n+1);
	ans = xor1^xor2;
	return ans;
}

int main() {
	// your code goes here
	vector<int>arr={1,2,4,5};
	int ans;
    ans = missingNumber(arr);
    cout<<ans;

}
