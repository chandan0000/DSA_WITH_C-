#include<bits/stdc++.h>
using namespace std;
int sumofaelem(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    return sum;
}
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"SUM OF ALL ELEMENT "<<sumofaelem(arr,size);
    return 0;
}