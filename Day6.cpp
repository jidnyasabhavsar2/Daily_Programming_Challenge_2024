#include <bits/stdc++.h>
using namespace std;

vector<vector<int>>zero_subarray_sum(vector<int>arr){
    int sum;
    vector<vector<int>>ans;
    for(int i=0 ; i<arr.size() ; i++){
        sum=0;
        for(int j = i; j<arr.size() ; i++){
            sum+=arr[j];
            if(sum == 0){
            vector<int>ans1={i,j};
            ans.push_back(ans1);
        }
        
        }
    }
    return ans;
}
