#include<iostream>
using namespace std;
int main(){
   

    int n,count=1;
    cout<<"Enter N :" ;
    cin>>n;

    // int copy=n;
    // while(copy>0){
    //     copy=copy/10;
    //     count++;
    // }
    
    while ( n > 0){
        count*=n%10;
        n/=10;
    }
    
    cout<<count;
    
    return 0;
}    