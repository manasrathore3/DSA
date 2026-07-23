#include<iostream>
#include <Climits>     
using namespace std;
int main(){
  // int arr[5]={1,2,3,5,9};
  // int size=5;

  // cout<<arr[0]<<endl;
  // cout<<arr[1]<<endl;
  // cout<<arr[2]<<endl;
  // cout<<arr[3]<<endl;
  // cout<<arr[4]<<endl;

  // cout<< sizeof(arr)/sizeof(int)<<endl;   //to find size of array 

  // for (int i = 0; i < size; i++){
  //   cout<<arr[i]<<endl;
  // }
  

  ///////////////////////// using loop for input any integer

  // int size=5;
  // int marks[size];

  // for (int i = 0; i < size ; i++){
  //   cin>>marks[i];
  // }

  // cout<<"Return marks array is :"<<endl;

  // for (int i = 0; i < size ; i++){
  //   cout<<marks[i]<<endl;
  // }
  
  ////////////////////////////////////////

  int size=5;
  int arr[size]={-1,-107,2,50,8,90};

  int smallest=INT_MAX;
  
  // for (int i = 0; i < size; i++){
  //   if (arr[i]<smallest){ 
  //     smallest=arr[i];
  //   }
  // }

  for (int i = 0; i < size; i++){
    smallest = min(arr[i],smallest);         //with min function
  }

  
  cout<<"The smallest no is :"<< smallest;

  return 0;
}