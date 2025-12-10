#include<bits/stdc++.h>
using namespace std;

void explainpair(){
    pair<int , int>p={2,3};
    cout << p.first<< p.second;

    pair<int ,pair<int,int >> p2={1,{2,3}};
    cout<< p2.first <<p2.second.second; 
}
int main(){
    explainpair();
}