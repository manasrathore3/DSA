#include<iostream>
using namespace std;
int main(){
   

    int n,rev,fin;
    cout<<"Enter N :" ;
    cin>>n;
    
    while ( n > 0){
        rev=n%10;
        n/=10;
        fin+=rev*10
    }    

    

    return 0;
}    
