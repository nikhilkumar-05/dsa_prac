#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={9 ,4,5,6,7,};
    int n=arr.size();
    vector<int>prefix(n);
    prefix[0]=arr[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+arr[i];
    }
    int L=1,R=3;
    int sum1=prefix[R]-prefix[L-1];
    
    int L2=0,R2=4;
    int sum2=prefix[R2];

    
    cout << "Sum(1,3): " << sum1 << endl;
    cout << "Sum(0,4): " << sum2 << endl;
}