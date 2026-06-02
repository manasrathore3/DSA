#include<iostream>
using namespace std;
int main(){
   

    int n,rev;
    int fin=0;
    cout<<"Enter N :" ;
    cin>>n;
    
    if (n>0){
        while ( n > 0){ 
          rev=n%10;
          fin*=10; 
          fin+=rev;   
          n/=10;
        }
        cout<<fin;
    }else if (n<0){ 
        n=n*(-1);
        while ( n > 0){ 
           rev=n%10;
           fin*=10; 
           fin+=rev;   
           n/=10;
        }

        fin=fin*(-1);
        cout<<fin;
    }  

    return 0;
}    


