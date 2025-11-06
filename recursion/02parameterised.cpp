#include<bits/stdc++.h>
using namespace std;
void func(int i,int sum){
    if(i<1){
        cout<<"sum="<<sum;
        return;
    }
    // cout<<i;
    func(i-1,sum+i);
}

int main(){

    func(6,0);
}

// 654321 sum=21   