// 852 leetcode find peak in a mountain array
#include<iostream>
#include<climits>
using namespace std;
int find(int *arr,int size){
    // int maxIndex= INT_MIN;
    // cout<<maxIndex<<endl;
    // for(int i=0;i< size;i++){
    //     if(arr[i] > arr[i+1])
    //      maxIndex =i;
    //      cout<<i<<endl;
    //      cout<<"max index "<<maxIndex<<endl;

    // }return maxIndex;
    cout<<"fine"<<endl;
    int s=0,e=size-1;
    int mid=(s+e)/2;;
    while(s<e){
           if (arr[mid] < arr[mid + 1]) {
                s=mid+1;
            }
            else{
                e=mid;
            }
        mid=(s+e)/2;
    }return s;
}
int main(){
    int arr[4]={0,2,1,0};
    int peak= find(arr,4);
    cout<<"peak index is:"<<peak;
} 