#include <bits/stdc++.h>
using namespace std;
int hashh[10000000];
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ;i<n;i++){
        cin>>arr[i];
    }
    


    //precompute
    // int hash[13]={0};  // works only if values are in range 0-12
    for(int i=0;i<n;i++){
        hashh[arr[i]] +=1;
        cout<<hashh[arr[i]];
    }




    int q;
    cin >> q;
    while(q--){
        int number;
        cin>>number;
        cout<<hashh[number];
    }
    return 0;
}

// 5 1 2 3 2 1
// 5 2 1 12 2 4