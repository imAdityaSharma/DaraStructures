// most frequent and least frequent

#include <iostream>
#include <vector>
using namespace std;
int element_count(vector<int> arr,int ele){
    int count=0;
    int n = (int)arr.size();
    for ( int i=0; i<n;i++)
        if (arr[i]==ele)
        count ++;
    return count;
}
void mostFreq(vector<int> arr){
    int n = (int)arr.size();
    int occ[2]={0,0};
    for ( int i =0; i<n; i++){
        if (occ[1]<element_count(arr,arr[i]))
        {
            occ[0]=arr[i];
            occ[1]=element_count(arr,arr[i]);
        }
    }
    cout<<"most frequent element="<<occ[0]<<endl<<"number of occurence="<<occ[1]<<endl;
}
void leastFreq(vector<int> arr){
    // int occ=10;
    // int t=0;
    // int leastOccEle[10][2];
    // int n = (int)arr.size();
    // for ( int i =0; i<n; i++){
    //     if (occ>=element_count(arr,arr[i]))
    //     {   t++;
    //         occ=element_count(arr,arr[i]);
    //         leastOccEle[i][0]=arr[i];
    //         leastOccEle[i][1]=occ;
    //     }
    // }
    // for(int i=0;i<t;i++)
    // cout<<"least frequent element="<<leastOccEle[i][0]<<endl<<"number of occurence="<<leastOccEle[i][1]<<endl;
    // it is working but not the way i intended so keepin it just in case i'm not lazy enough to complete it.
}
int main(){
    vector<int> arr={1,1,1,2,5,3,6,6,6,7};
    // int *x=mostFreq(arr,10);
    // cout<<"most frequent element="<<x[0]<<endl<<"number of occurence="<<x[1]<<endl;
    mostFreq(arr);
    // leastFreq(arr);
    return 0;
}