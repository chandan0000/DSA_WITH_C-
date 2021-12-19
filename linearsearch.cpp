#include<bits/stdc++.h>
using namespace std;
bool lsearch(int array[],int size,int key){
    for(int i=0;i<size;i++){
        if(array[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[10]={12,-1,-12,13,4,5,12,33,44,55};
    int key;
    cin>>key;
    bool found=lsearch(arr,10,key);
    if(found){
     cout<<"this key is present"<<endl;
    }
    else{
        cout<<"this key not present"<< endl;
    }
    
}