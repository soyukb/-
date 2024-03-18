#include<bits/stdc++.h>
using namespace std;

int N,X;
int arr[100009];

int serch(int x){
    int L,R,mid;
    L=0;
    R=N-1;
    mid=(L+R)/2;
    while(L<=R){
        if(arr[mid]==x){
            return mid+1;
        }
        else if(arr[mid]<x){
            L=mid+1;
        }
        else{
            R=mid-1;
        }
        mid=(L+R)/2;
    }

}


int main(){
    cin>>N>>X;
    for(int i=0;i<N;i++){
        cin>>arr[i];
    };
    int answer;
    answer=serch(X);
    cout<<answer<<endl;    
}