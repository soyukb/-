#include<bits/stdc++.h>
using namespace std;

int H,W,Q;
int X[1509][1509],Z[1509][1509]={0};
int A[100009],B[100009],C[100009],D[100009];

int main(){
    cin >> H >> W;
    for(int i=1;i<=H;i++){
        for(int j=1;j<=W;j++){
            cin >> X[i][j];
        }
    }
    cin >> Q;
    for(int i=1;i<=Q;i++){
        cin >> A[i] >> B[i] >> C[i] >> D[i];
    }
    for(int i=1;i<=H;i++){
        for(int j=1;j<=W;j++){
            Z[i][j] =  Z[i][j-1] + X[i][j];
        }
    }
    for(int i=1;i<=W;i++){
        for(int j=1;j<=H;j++){
            Z[j][i] =  Z[j-1][i] + Z[j][i];
        }
    }
    for(int i=1;i<=Q;i++){
        int a = A[i],b = B[i],c = C[i],d = D[i];
        cout << Z[c][d] - Z[c][b-1] - Z[a-1][d] + Z[a-1][b-1] << endl;
    }
}
