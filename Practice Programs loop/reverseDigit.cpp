#include<iostream>
using namespace std;
int main(){
   

    int n,rev;
    int fin=0;
    cout<<"Enter N :" ;
    cin>>n;
    
    while ( n > 0){ 
        rev=n%10;
        fin*=10; 
        fin+=rev;   
        n/=10;

    }    
    cout<<fin;

    return 0;
}    
