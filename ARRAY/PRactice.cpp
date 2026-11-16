#include<iostream>
#include<climits>
using namespace std;


int linear(int n){
      
    int arr[]={1,4,7,9,10};
    for(int i=0;i<5;i++){
       if(n==arr[i]){
         return i;
       }
    }

    return -1;
}



int main(){
  
    cout<<"Item fount at index no : "<<linear(10);

    return 0;
}




