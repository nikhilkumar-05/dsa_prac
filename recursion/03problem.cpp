#include<bits/stdc++.h>

int func(int n){
    if(n==0){
        return 0 ;
    }
    cout<< n <<" ";
    return n+func(n-1);

}
int main(){
    cout << func(3);
}

// 3 2 1 6%  