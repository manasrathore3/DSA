#include<iostream>
using namespace std;

void reverseArr(int arr[],int sz){

    int start = 0;
    int end = sz-1;

    while(start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
  
    int arr[]={1,2,3,4,5,6};
    int sz=6;

    reverseArr(arr,sz);

    for(int i=0;i<sz;i++){
      cout<<arr[i]<<" ";
    }
    
    return 0;
}




