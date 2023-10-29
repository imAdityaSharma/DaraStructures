#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
bool JumpSearch(vector<int> arr, int ele){
    int size= (int)arr.size();
    int step = sqrt(size);
    int prev = 0;
    while( arr[min(step,size)]<ele){
        prev=step;
        step+=sqrt(size);
        if(prev>=size) return false;
    }
    while(arr[prev]<ele){
        prev++;
        if(prev==min(step,size))return false;
    }
    if(arr[prev]==ele) return true;
    return false;
}
int main(){
    vector<int> arr={0,1,2,3,4,5,6,7,8,9};
    int val = 7;
    if(JumpSearch(arr,val))
    cout<<"value "<<val<<" is present in array"<<endl;
    else
    cout<<"value "<<val<<" is not present in array"<<endl;
    return 0;
}