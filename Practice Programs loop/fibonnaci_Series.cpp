#include<iostream>
using namespace std;

int main(){
     
    int n,next=0;
    int b=0;
    int a=1;
    cout<<"Enter N:";
    cin>>n;
  
    for(int i=0;i<n;i++){
        cout<<next<<endl;
        next=a+b;
        a=b;
        b=next;
    }


    return 0;
} 
        
    