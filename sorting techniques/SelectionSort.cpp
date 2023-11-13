#include<iostream>
#include<vector>

using namespace std;

void SelectionSort(int arr[],int n){
    int min_idx;
    for (int i = 0; i < n-1; i++)
    {
        min_idx = i;
        for( int j =i+1; j<n-1; j++){
            if(arr[j]<arr[min_idx])
            min_idx=j;
        }
        if (min_idx!=i)
        swap(arr[i],arr[min_idx]);
    }   
}

void printArray(int arr[], int size){
    int i;
    for (i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main(){
    int x[]={   1,2,4,22,32,45,65};
    int n = sizeof(x)/sizeof(x[0]);
    SelectionSort(x,n);

    printArray(x,n);
    return 0;
}