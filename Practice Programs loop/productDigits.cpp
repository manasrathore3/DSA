#include<iostream>
using namespace std;
int main(){
   

    int n,product=1;
    cout<<"Enter N :" ;
    cin>>n;
    
    while ( n > 0){
        product*=n%10;
        n/=10;
    }
    
    cout<<product<<" is the product of given number";
    

    return 0;
}    