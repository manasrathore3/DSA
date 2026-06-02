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
        if(fin==n){
           cout<<"Not Palindrome";
        }else{
            cout<<"Palindrome";
        }   


        ////clear the misTAKE AND REMOVE WRONG CODE
    // }else if (n<0){ 
    //     n=n*(-1);
    //     while ( n > 0){ 
    //        rev=n%10;
    //        fin*=10; 
    //        fin+=rev;   
    //        n/=10;
    //     }

    //     fin=fin*(-1);
    //     if (fin==n){
    //        cout<<"Palindrome";
    //     }else{
    //         cout<<"Not Palindrome";
    //     }
    // }

    return 0;
  }
}