#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n){
    if(n<0){
        return fibonacci( );
        
    }
    return fibonacci(n-1);
    return fibonacci(n-2);
}
int main(){
    int n;
    cin>>n;
    fibonacci(n);
}