#include<bits/stdc++.h>
using namespace std;

int rangesum(vector<int>&prefix,int l,int r){
    int sum=0;
    if(l==0){
        return prefix[r];
    }

        sum+=prefix[r]-prefix[l-1];

    return sum;
}



int main(){
    vector<int> ar={2, 3, 1, 4, 5};

    int n=ar.size();
    vector<int> prefix(n);
    prefix[0]=ar[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+ar[i];
    }
    int l=1 ,r=3;
    cout<<rangesum(prefix,l,r);
    
}