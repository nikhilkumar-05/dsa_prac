#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<string>a;
    a.push("abc");
    a.push("bcd");
    a.push("fg");
    a.push("zz");
    while(!a.empty()){
        cout<<a.front()<<endl;
        a.pop();
    }
}