#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;
    int i;                          //this question is wrong correct it
    for (int i=1;i<=n;i++){
        if (n%i==0 && n%n==0){
            cout<<"No prime";
        }
        
    }
    
    

    return 0;
} 