//Program to find the minimum or maximum element of an array

#include <iostream>
using namespace std;

int maxnum(int arr[], int n){
    int maxx=arr[0];
    for (int i=0;i<n;i++)
    {
        if (arr[i]>maxx)
        {
            maxx=arr[i];
            // cout<<"itter"<<i<<"val"<<maxx<<endl;
        }
    }
    return maxx;
}
int minnum(int arr[],int n){
int minn=2147483647;
    for (int i=0; i<n ;i++)
    {   
        if (arr[i]<minn)
        {
            minn=arr[i];
        }
        else continue;
    }
    return minn;
}
// driver code
int main(){
    int arr[10]={10,13,53,34,56,634,43,756,5554,0};
    cout<<"maximum "<<maxnum(arr,10)<<endl;
    cout<<"minimum "<<minnum(arr,10)<<endl;

    return 0;
}

