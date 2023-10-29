#include <iostream>
#include <vector>
using namespace std;

bool InterpolationSearch(vector <int> arr,int ele, int lo, int hi){
        int pos;
        if ( lo<=hi && ele>=arr[lo] && ele<=arr[hi]){
            pos = lo + (((double)(hi - lo)/(arr[hi]-arr[lo]))*(ele-arr[lo]));
            // cout<<pos;
            if (arr[pos]==ele) return  true;
            if (arr[pos]<ele) return  InterpolationSearch(arr,ele,pos+1,hi);
            if (arr[pos]>ele) return InterpolationSearch(arr,ele,lo,pos-1);
        }
        return false;

    }
int main(){
    vector<int> arr={10,12,13,16,18,19,20,21,22,23,24,33,35,42,47};
    int val =355 ;
    int si=(int)arr.size()-1;
    if(InterpolationSearch(arr,val,0,si)) cout<<"value "<<val<<" is present in array"<<endl;
    else    cout<<"value "<<val<<" is not present in array"<<endl;
    return 0;
}