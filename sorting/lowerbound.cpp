#include<bits/stdc++.h>
using namespace std;
int lowerbound(int arr[],int n,int target){
    int l=0;
    int h=n-1;
    int ans=n;
    while(h>=l){
        int mid =(l+h)/2;
        if(arr[mid]>=n){
            ans =mid;
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    cout<<lowerbound(arr,n ,target);
}