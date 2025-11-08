#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    
    //pre compute
    map <int ,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }


    for(auto it: mp){
        cout<<it.first<<it.second;
    }



    int q;
    cin>>q;
    while(q--){
        int number;
        cin>> number;
        cout<<mp[number];
    }
}


// 1 2 2 3 3 3 4 5
// 4
// 3
// 2
// 5
// 7
// 3210%        