#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> ar={2, 3, 1, 4};
    int n=ar.size();
    vector<int>prefix(n);
    prefix[0]=ar[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+ar[i];
    }
    for(int x: prefix ){
        cout<<x;
    }

}

// 057811%  