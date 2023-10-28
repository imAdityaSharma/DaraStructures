// Last duplicate element in a sorted array

#include <iostream>

using namespace std;

int dupele ( int arr[], int n){
    int ldup = 0;
    for( int i=0; i<n-1 ; i++){
        if (arr[i]==arr[i+1])
        ldup=arr[i];
    }
    return ldup;
}

int main(){
    int arr[10]={1,2,2,3,4,5,6,7,7,8};

    cout<<dupele(arr,10)<<endl;
    return 0;
}