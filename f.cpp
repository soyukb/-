#include<bits/stdc++.h>
using namespace std;

bool countv(int a,char x, string& y){
    int count = 0; // 出現回数をカウントする変数

    size_t pos = y.find(x); // 最初のtargetの位置を探す
    while (pos != std::string::npos) { // std::string::nposは見つからなかった場合に返される値
            count++; // 文字が見つかったのでカウントを1増やす
            pos = y.find(x, pos + 1); // 次のtargetを現在位置の次から探す
    }
    if(count == a)return true;
    else return false;
}

int main(){  
    string str = "wbwbwwbwbwbw";  
    string sum; 
    for(int i = 1; i <=20; i++){
        sum = sum + str;
    }
    int len = sum.length();
    int W,B;
    cin>>W>>B;
    int Z = W+B;
    for(int i = 0; i<=len-Z; i++){
        string sss = sum.substr(i,Z);
        if(countv(W, 'w', sss) && countv(B, 'b', sss)){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout << "No"<<endl;
    return 0;
}