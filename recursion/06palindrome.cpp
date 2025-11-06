#include<bits/stdc++.h>
using namespace std;
bool valid_palindrome(int i, string &a){
    if(i>=a.size()/2) return true;
    if(a[i]!=a[a.size()-i-1]){
        return false;
    }
    return valid_palindrome(i+1,a);
}
int main(){
    string a;
    cin>>a;
    if(valid_palindrome(0,a)){
        cout<<"palindrome";
    }else{
    cout<<"not_palindrome";
    }
}