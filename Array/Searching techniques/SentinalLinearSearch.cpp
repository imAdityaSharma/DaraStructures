#include <iostream>
using namespace std;

bool SeantinalLinearSearch(int arr[],int ele, int n){
        int last = arr[n-1];
        arr[n-1]= ele;
        int i=0;
        while( arr[i]!=ele) i++;
        arr[n-1]=last;
        if( (i<n-1)|| (arr[n-1]==ele))  return true;
        return false;

    }
int main(){
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    int val = 91;
    if(SeantinalLinearSearch(arr,val,10)) cout<<"value "<<val<<" is present in array"<<endl;
    else    cout<<"value "<<val<<" is not present in array"<<endl;
    return 0;
}