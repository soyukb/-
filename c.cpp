#include<bits/stdc++.h>
using namespace std;

int main(){
    int D,N;
    int L[100009],R[100009],sum[100009]={0},ans[100009];
    cin >> D >> N;
    L[0]=0;
    R[0]=0;
    for(int i=1;i<=N;i++){
        cin >> L[i] >> R[i];
        sum[L[i]]++;
        sum[R[i]+1]--;
    }
    ans[0]=0;
    for(int i=1;i<=D;i++){
        ans[i]=ans[i-1]+sum[i];
    }
    for(int i=1;i<=D;i++){
        
        cout << ans[i] <<endl;
    }
}