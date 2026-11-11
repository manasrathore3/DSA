#include<iostream>
using namespace std;

int printHello(){
    cout<<"Hello\n";

    return 4;
}

int sum(int a,int b){    //parameters inme arguments pass krte hai call karte waaqt
    int s=a+b;
    return s;
}

int fact(int n){
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial*=i;
    }

    return factorial;
}

int ncr(int n,int r){

    int nfact=fact(n);
    int rfact=fact(r);
    int n_rfact=fact(n-r);
    
    return nfact/(rfact*n_rfact);
    
}
int main(){
    
    // printHello();
    // cout<<printHello()<<endl;   //print value during execution 
    // int val = printHello();     //val ke andar store kiya phir use kiya
    // cout<<"Return value is:" << val ;
   
    cout<<ncr(6,3);  
   
   
    return 0;
}