#include<iostream>
using namespace std;
int main(){
   

    int n,mid;
    cout<<"Enter N :" ;
    cin>>n;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-i-1; j++){
            cout<<"  ";
        }cout<<i+1<<" ";
        if (i!=0){
            for (int j = 0; j < 2*i-1; j++){
                cout<<"0 ";
            }cout<<i+1<<" ";
        }
        cout<<endl;
    }
    
    return 0 ;
}