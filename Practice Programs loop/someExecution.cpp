#include<iostream>
using namespace std;
int main(){
     
    int n,rev;
    int fin=0;
    cout<<"Enter N:";
    cin>>n;
    
    
if (n>0){
    while ( n > 0){ 
        rev=n%10;
        fin*=10; 
        fin+=rev;   
        n/=10;
    }
    cout<<fin;
}   
cout<<n;
// if (fin==n)
// {
//    cout<<"palindrome";
// }

// if(fin>0){
//     while ( fin > 0){ 
//         rev=fin%10;
//         n*=10; 
//         n+=rev;   
//         fin/=10;
//     }
// }  
}
    