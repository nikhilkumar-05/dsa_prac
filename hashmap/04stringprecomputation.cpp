#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;
    map<char , int>mp;
    // unordered_map<char , int>mp;
    int n=a.size();

    for(int i=0;i<n;i++){
        mp[a[i]]++;;
    }


    for(auto it:mp){
        cout<<it.first<<it.second<<endl;
    }
}

// abscacaacc
// a4
// b1
// c4
// s1