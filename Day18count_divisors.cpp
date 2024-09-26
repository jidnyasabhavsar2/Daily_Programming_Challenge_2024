#include <bits/stdc++.h>
using namespace std;

int countdivisors( int N){
    int cnt=0;
    for(int i = 1; i*i <= N ; i++){
        if(N % i == 0 ){
            cnt++;
            if(N / i != i){
                cnt++;
            }
        }
    }
    return cnt;
}
int main() {
	// your code goes here
	int N=18;
	int ans = countdivisors(N);
    cout << ans;
}
