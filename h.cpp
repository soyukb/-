#include<bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    // vector<vector<int>> X(H+1, vector<int>(W+1)), Z(H+1, vector<int>(W+1, 0));
    int X[1509][1509], Z[1509][1509] = {0};
    
    for(int i = 1; i <= H; i++) {
        for(int j = 1; j <= W; j++) {
            cin >> X[i][j];
            // 各行の累積和を計算
            Z[i][j] = Z[i][j-1] + X[i][j];
        }
    }
    
    for(int i = 1; i <= H; i++) {
        for(int j = 1; j <= W; j++) {
            // ここで列方向の累積和を計算
            Z[i][j] += Z[i-1][j];
        }
    }
    
    int Q;
    cin >> Q;
    vector<int> A(Q+1), B(Q+1), C(Q+1), D(Q+1);
    for(int i = 1; i <= Q; i++) {
        cin >> A[i] >> B[i] >> C[i] >> D[i];
    }
    
    for(int i = 1; i <= Q; i++) {
        // 累積和を用いて指定範囲の合計を出力
        cout << Z[C[i]][D[i]] - Z[C[i]][B[i]-1] - Z[A[i]-1][D[i]] + Z[A[i]-1][B[i]-1] << "\n";
    }
}