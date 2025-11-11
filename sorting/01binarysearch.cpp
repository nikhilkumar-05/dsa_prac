#include <bits/stdc++.h>
using namespace std;
int binary_search(int arr[] , int n,int target){
    int l=0;
    int h=n-1;
    while(h>=l){
        int mid= (l+h)/2;
        if (arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            h=mid-1;
        }
        else {
            l=mid+1;
        }
    
}
        return -1;
    
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
    cout<<binary_search(arr,n,target);
}