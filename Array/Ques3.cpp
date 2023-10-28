// most frequent and least frequent

#include <iostream>
using namespace std;
int element_count(int arr[],int n, int ele){
    int count=0;
    for ( int i=0; i<n;i++)
        if (arr[i]==ele)
        count ++;
    return count;
}
void mostFreq(int arr[], int n){
    int occ[2]={0,0};
    for ( int i =0; i<n; i++){
        if (occ[1]<element_count(arr,n,arr[i]))
        {
            occ[0]=arr[i];
            occ[1]=element_count(arr,n,arr[i]);
        }
    }
    cout<<"most frequent element="<<occ[0]<<endl<<"number of occurence="<<occ[1]<<endl;
}
void leastFreq(int arr[], int n){
    int occ=10;
    int t=0;
    int leastOccEle[10][2];
    for ( int i =0; i<n; i++){
        if (occ>=element_count(arr,n,arr[i]))
        {   t++;
            occ=element_count(arr,n,arr[i]);
            leastOccEle[i][0]=arr[i];
            leastOccEle[i][1]=occ;
        }
    }
    for(int i=0;i<t;i++)
    cout<<"least frequent element="<<leastOccEle[i][0]<<endl<<"number of occurence="<<leastOccEle[i][1]<<endl;
}
int main(){
    int arr[10]={1,1,1,2,5,3,6,6,6,7};
    // int *x=mostFreq(arr,10);
    // cout<<"most frequent element="<<x[0]<<endl<<"number of occurence="<<x[1]<<endl;
    // mostFreq(arr,10);
    leastFreq(arr,10);
    return 0;
}