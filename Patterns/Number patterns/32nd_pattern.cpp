#include<iostream>
using namespace std;
int main(){
   

    int n,num;
    cout<<"Enter N :" ;
    cin>>n;

    for (int i = 0; i < n; i++){                      //32nd Question
        for (int j = 0; j < 2*i+1; j++){
            if (j%2==0){
                cout<<i+1<<" ";
            }else{
                cout<<"* ";
            }
        }cout<<endl;
    }                                                
    for (int i = 0; i < n-1; i++){
        for (int j = 0 ; j < 2*(n-i)-3; j++){
            if (j%2==0){
                cout<<n-i-1<<" ";
            }else{
                cout<<"* ";
            } 
        }cout<<endl;    
    }
    return 0;
}