#include<iostream>
using namespace std;
int main(){
     
    int n,res=0;
    int y=0;
    int x=1;
    cout<<"Enter N:";
    cin>>n;
  
    for(int i=0;i<n;i++){
            cout<<res<<endl;
            res=x+y;
            x=y;
            y=res;
        }

    return 0;
} 
        
    