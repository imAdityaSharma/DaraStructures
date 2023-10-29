#include <iostream>
#include<vector>
#include<cmath>
using namespace std;
bool MetaBinarySearch(vector<int>arr,int ele){
   int IntervalSize = (int)arr.size();
   int  len = log2(IntervalSize-1)+1;
   int pos=0;
    for( int i=len; i>=0; i --){
        if (arr[pos]==ele) return true;
        int new_pos = pos | (1<<i);
        if ((new_pos<IntervalSize)&&(arr[new_pos]<=ele))
        pos = new_pos;
    }
    return (arr[pos]==ele ? true:false);
}
int main(){
    vector<int> arr={0,1,2,3,4,5,6,7,8,9};
    int val = 99;
    if(MetaBinarySearch(arr,val)) cout<<"value "<<val<<" is present in array"<<endl;
    else    cout<<"value "<<val<<" is not present in array"<<endl;
    return 0;
}