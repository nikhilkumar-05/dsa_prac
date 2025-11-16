#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    auto l=lower_bound(arr.begin(),arr.end(),target);
    if(l!=arr.end()){
    cout<<*l;
    }
    else{
        cout<<"no element found "<<target;
    }
}


// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
//         auto l =lower_bound(nums.begin(),nums.end(),target);
//         auto u= upper_bound(nums.begin(),nums.end(),target);
//             if(l==nums.end()||*l!=target){
//                 return {-1,-1};
//             }else {
//                 int start =l-nums.begin();
//                 int end =u-nums.begin()-1;
//                 return{start,end};
//             }
//         }
    
// };


// 1
// 2
// 5
// 6
// 7
// 4
// 5%                                                                                                                                    