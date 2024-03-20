#include<bits/stdc++.h>
using namespace std;

int main(){
    int D,N;
    cin >> D >> N;
    int L[100009],R[100009],G[100009],sum[100009]={0};
    L[0]=0;
    R[0]=0;
    for (int i = 1; i <= N; i++){
        cin >> L[i] >> R[i];
    }
    for (int i = 1; i <= D; i++){
        for(int j = 1; j <= N; j++){
            if(i == L[j]){
                G[i] = G[i] + 1;
            }
            if(i == R[j]+1){
                G[i] = G[i] - 1;
            }
        }        
    }
    sum[0] = 0;
    for(int i = 1; i <= D; i++){
        sum[i] = sum[i-1] + G[i];
    }
    for(int i = 1; i <= D; i++){
        cout << sum[i] << endl;
    }
    return 0;
}