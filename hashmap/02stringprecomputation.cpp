#include <bits/stdc++.h>
using namespace std;
int main(){
    string c;
    cin>>c;
    
    int hashh[256]={0};
    for(int i=0;i<c.size();i++){
        hashh[c[i]]++;
    }

    int q;
    cin>>q;
    while(q--){
        char a;
        cin >> a;
        cout << hashh[a];
    }
    return 0;

}

// abaabbabs
// 3
// a
// b
// z
// 440%      