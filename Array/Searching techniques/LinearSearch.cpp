#include <iostream>
using namespace std;
bool LinearSearch(int arr[], int n, int size){
    for ( int i=0; i<size; i++){
        if (arr[i]==n) return true;
    }
    return false;
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,0};
    int val = 99;
    if(LinearSearch(arr,val,10))
    cout<<"value "<<val<<" is present in array"<<endl;
    else
    cout<<"value "<<val<<" is not present in array"<<endl;
    return 0;
}