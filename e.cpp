#include<bits/stdc++.h>
using namespace std;

int main(){
    int D,N;
    cin>>D>>N;
    int L[100009],R[100009],G[100009],sum[100009];
    for(int i=1;i<=N;i++){
        cin >> L[i]>>R[i];
    }
    for(int i=1;i<=N;i++){
        G[L[i]] += 1; 
        G[R[i]+1] -= 1;        
    }
    sum[0]=0;
    for(int i=1;i<=D;i++){
        sum[i] = sum[i-1] + G[i];
    }
    for(int i=1;i<=D;i++){
        cout << sum[i] << endl;
    }

}