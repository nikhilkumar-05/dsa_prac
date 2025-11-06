#include<bits/stdc++.h>
using namespace std;
void reverse(int l,int a[],int r){
    if(l>=r){
        return;
    }
    swap(a[l],a[r]);
    reverse(l+1,a ,r-1);
}
int main(){
    int i;
    int n;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    reverse(0,arr,n-1);
    for(i=0;i<n;i++){
        cout << arr[i];
    }
    
}