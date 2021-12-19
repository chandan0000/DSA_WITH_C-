#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(start+end)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(start+end)/2;
    }
    return -1;
}



int main(){

   int arr[10]={1,2,3,4,5,6,7,8,9,10};
   int key;
   cin>>key;
   cout<<"binaresearch   "<<binarysearch(arr,10,key);



    return 0;
}