#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
bool BinarySearch(vector<int> arr,int ele, int Low, int High){
   if(High>=Low)
    {
        int mid = Low+((High-Low)/2);
        if  (arr[mid]==ele)   return true;
        if  (arr[mid]>ele)    return BinarySearch(arr, ele, Low, mid-1);
        if  (arr[mid]<ele)    return BinarySearch(arr,ele, mid+1, High);
    }
    return false;
}
bool ExpotentialSearch(vector<int>arr,int val){
    int n = (int)arr.size();
    if(arr[0]==val) return true;
    int i=1;
    while( i<n && arr[i]<=val)
        i*=2;
    return BinarySearch(arr,val,i/2,min(i,n-1));

}

int main(){
    vector<int> arr={0,1,2,3,4,5,6,7,8,9};
    int si= (int)arr.size();
    int val = 9;
    if(ExpotentialSearch(arr,val)) cout<<"value "<<val<<" is present in array"<<endl;
    else    cout<<"value "<<val<<" is not present in array"<<endl;
    return 0;
}