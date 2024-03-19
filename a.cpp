#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,Q;
    int arr[100009],sum[100009],L[100009],R[100009];
    cin>>N>>Q;
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    for(int i=0;i<Q;i++){
        cin>>L[i]>>R[i];
    }
    sum[0]=0;
    for(int i=1;i<N+1;i++){
        sum[i]=sum[i-1]+arr[i-1];
    }
    for(int i=0;i<Q;i++){
        cout << sum[R[i]]-sum[L[i]-1] << endl;
    }
}