#include<bits/stdc++.h>
using namespace std;

int arraymax(int arr[],int size){
    int max=INT_MIN;
    for(int i=0;i<size; i++){
        if( arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int arraymin(int arr[],int size){
    int min=INT_MAX;
    for(int i=0;i<size; i++){
        if( arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
 
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"MAX ELEMENT OF ARRAY  "<<arraymax(arr,n)<<endl;
        cout<<"MIN ELEMENT OF ARRAY  "<<arraymin(arr,n)<<endl;
    
    
    return 0;
}