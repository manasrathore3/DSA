#include<iostream>
using namespace std;
int main(){
   

    int n,sum=0;
    cout<<"Enter N :" ;
    cin>>n;

    // while (n>0){
    //     sum+=n%10;
    //     n=n/10;
    // }

    for (int copy = n; copy > 0 ; copy=copy/10){
        sum+=copy%10;
    }
    

    cout<<sum;

    return 0;
}    