// Last duplicate element in a sorted array

#include <iostream>
#include<vector>
using namespace std;

int dupele ( vector<int> arr){
    int ldup = 0;
    int n = (int)arr.size();
    for( int i=0; i<n-1 ; i++){
        if (arr[i]==arr[i+1])
        ldup=arr[i];
    }
    return ldup;
}

int main(){
    vector<int> arr={1,2,2,3,4,5,6,7,7,8};

    cout<<dupele(arr)<<endl;
    return 0;
}