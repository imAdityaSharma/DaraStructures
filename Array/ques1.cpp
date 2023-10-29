//Program to find the minimum or maximum element of an array

#include <iostream>
#include <vector>
using namespace std;

int maxnum(vector<int> arr){
    int n = (int)arr.size();
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
int minnum(vector<int> arr){
    int n = (int)arr.size();
    int minn=2147483647;
    for (int i=0; i<n ;i++){   
        if (arr[i]<minn){
            minn=arr[i];
        }
        else continue;
    }
    return minn;
}
// driver code
int main(){
    vector<int> arr={10,13,53,34,56,634,43,756,5554,0};
    cout<<"maximum "<<maxnum(arr)<<endl;
    cout<<"minimum "<<minnum(arr)<<endl;
    return 0;
}

