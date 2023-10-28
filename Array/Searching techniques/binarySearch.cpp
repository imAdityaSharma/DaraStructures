#include <iostream>
using namespace std;
bool BinarySearch(int arr[],int ele, int Low, int High){
   if(High>=Low)
    {
        int mid = Low+((High-Low)/2);
        if  (arr[mid]==ele)   return true;
        if  (arr[mid]>ele)    return BinarySearch(arr, ele, Low, mid-1);
        if  (arr[mid]<ele)    return BinarySearch(arr,ele, mid+1, High);
    }
    return false;
}
int main(){
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    int val = 9;
    if(BinarySearch(arr,val,0,9)) cout<<"value "<<val<<" is present in array"<<endl;
    else    cout<<"value "<<val<<" is not present in array"<<endl;
    return 0;
}