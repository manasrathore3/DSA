#include<iostream>
using namespace std;
int main(){
   

    int n,mid;
    cout<<"Enter N :" ;
    cin>>n;

    mid=(n+1)/2;

    for (int i = 0; i < mid ; i++){              //hollow space diamond pattern
        for (int j = 0; j < mid-1-i; j++){
            cout<<"  ";
        }cout<<"* ";
        if (i!=0){
            for (int j = 0; j < 2*i-1; j++){
                cout<<"  ";
            }cout<<"* ";
        }
        cout<<endl;   
    }
    for (int i = 0; i < mid-1; i++){
        for (int j = 0; j < i+1; j++){
            cout<<"  ";
        }cout<<"* ";
        if(i!=mid-2){
            for (int j = 0; j < 2*(mid-i)-5; j++){
                cout<<"  ";
            }cout<<"* ";
        }cout<<endl;
    }
    
    
    return 0;
}    