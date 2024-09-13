// find the leader elements from the array 
// leader element define as the element is largest element among its all right side elements.
// return the array of leader elements.

#include <bits/stdc++.h>
using namespace std;

vector<int>find_leader(vector<int>arr){
    vector<int>ans;
    
    int largest=arr[arr.size()-1];
    ans.push_back(largest);
    
    int i=arr.size()-2;
    while(i>=0){
        if(arr[i] > largest){
            largest=arr[i];
            ans.push_back(largest);
        }
        i--;
    }
     reverse(ans.begin(),ans.end());
     return ans;
}

int main() {
	// your code goes here
	vector<int>arr={16,17,4,3,5,2};
	vector<int>ans=find_leader(arr);
	int i=0;
	while(i<ans.size()){
	    cout<<ans[i]<<endl;
	    i++;
	}

}
