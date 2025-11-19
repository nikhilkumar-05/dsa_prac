#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>a;

    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);
    while(!a.empty()){
        cout<<a.top()<<endl;
        a.pop();
    }
}