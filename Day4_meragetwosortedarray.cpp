// merge the two sortd array in the ascending order
#include <bits/stdc++.h>
using namespace std;

void mergesortedarray(int a[],int b[],int n,int m){
    int left=n-1;
    int right=0;
    while(left>=0 && right<m){
        if(a[left] > b[right]) {
            swap(a[left],b[right]);
            left--;
            right++;
        }
        else break;
    }
    sort(a,a+n);
    sort(b,b+m);
}


int main() {
	// your code goes here
	int a[]={10,12,14};
	int n=sizeof(a)/sizeof(int);
	int b[]={1,3,5};
	int m=sizeof(b)/sizeof(int);
    mergesortedarray(a,b,n,m);
    int i=0;
    int j=0;
    cout<<"the array a is:"<<endl;
    while(i<n){
        cout<<a[i]<<endl;
        i++;
    }
    cout<<"the array b is:"<<endl;
    while(j<m){
        cout<<b[j]<<endl;
        j++;
    }
    return 0;
}
