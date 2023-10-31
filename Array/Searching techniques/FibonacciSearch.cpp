#include<iostream>
#include<vector>

using namespace std;

bool FibonacciSearch(vector<int> arr, int ele){
    int fib1=0;
    int fib2=1;
    int fib3=fib1+fib2;
    int n = (int)arr.size();
    while( fib3<n){
        fib1=fib2;
        fib2=fib3;
        fib3=fib1+fib2;
    }
    int ofset=-1;
    while(fib3>1){
        int i = min(ofset+fib1,n-1);
        if(arr[i]<ele){
            fib3 = fib2; 
            fib2 = fib1; 
            fib1 = fib3 - fib2; 
            ofset = i;         }
        else if (arr[i] > ele) { 
            fib3 = fib1; 
            fib2 =fib2 - fib1; 
            fib1 = fib3 - fib2;         } 
        else return true;
    }
    if (fib2 && arr[ofset + 1] == ele) 
        return true;
    return false; 
}

int main(){
    vector<int> arr={0,1,1,2,3,5,8,13,21,34,55,89};
    int val = 55;
    if(FibonacciSearch(arr,val))
    cout<<"value "<<val<<" is present in array"<<endl;
    else
    cout<<"value "<<val<<" is not present in array"<<endl;
    return 0;
}