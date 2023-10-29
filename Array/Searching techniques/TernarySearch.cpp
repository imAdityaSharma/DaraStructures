#include<iostream>
#include<vector>
using namespace std;
// recursive approach
bool TernarySearch(vector<int> arr, int l, int r, int ele){
    // int size = (int)arr.size();
    if (r>=l){
        int m1= l+(r-l)/3;
        int m2 = r-(r-l)/3;
        return ( (  arr[m1]==ele) ? true : (arr[m2]==ele) ? true: 
                 (  ele<arr[m1] ? TernarySearch(arr,l,m1-1,ele) :
                 (  ele>arr[m2])? TernarySearch(arr,m1+1,m2-1,ele):
                 (  TernarySearch(arr, m1+1,m2-1,ele))
                 )
               );
    }
    return false;
}
bool TernarySearchIterative(vector<int> arr, int l, int ele){
    int r= (int)arr.size();
    while(r>=l){
        int m1= l+(r-l)/3;
        int m2 = r-(r-l)/3;
        if(arr[m1]==ele) return true;
        else if(arr[m2]==ele) return true;
        else if(ele<arr[m1]) r= m1-1;
        else if(ele>arr[m2]) l=m2+1;
        else {
            l=m1+1;
            r=m2-1;
            }
    }
    return false;
}

int main(){
    vector<int> arr={0,1,2,3,4,5,6,7,8,9};
    int val = 11;
    int r=(int)arr.size();
    // if(TernarySearch(arr,0,r,val)) cout<<"value "<<val<<" is present in array"<<endl;
    // else    cout<<"value "<<val<<" is not present in array"<<endl;
    if(TernarySearchIterative(arr,0,val)) cout<<"value "<<val<<" is present in array"<<endl;
    else    cout<<"value "<<val<<" is not present in array"<<endl;
    return 0;
}