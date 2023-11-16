#include <iostream>
using namespace std;

int binarySearch(int a[],int beg,int end,int val){
   if(beg <= end){
       int mid;
       mid = (beg + end)/2;
       if(a[mid] == val){
           return mid;
       }
       else if(val > a[mid]){
           return binarySearch(a,mid+1,end,val);
       }
       else{
           return binarySearch(a,beg,mid-1,val);
       }
   }
       return -1;
}
int main() {
    int arr[5]={12,14,20,23,25};
    int value;
    int size= sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the value to be searched:";
    cin>>value;
    int res = binarySearch(arr,0,size-1,value);
    if(res == -1){
        cout<<"Element is not found";
    }
    else{
        cout<<"Element is found at index "<<res;
    }
    return 0;
}
