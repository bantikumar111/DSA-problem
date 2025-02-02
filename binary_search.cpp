#include<iostream>
using namespace std;
int binarySearch(int arr[], int size, int key){
int start=0,end=size-1;
int mid=(start+end)/2;
while(start<=end){
    if(arr[mid]==key) return mid;

    if(key>arr[mid]) 
    start=mid+1;

    else //key<arr[mid]
    end=mid-1;

    mid=(start+end)/2;
}return -1;
}
int main(){
    int arr[10]={3,5,6,7,8,9,56,77,88,889};
    int index= binarySearch(arr, 10, 77);
    cout<<"Element is present at :"<<index;    
}