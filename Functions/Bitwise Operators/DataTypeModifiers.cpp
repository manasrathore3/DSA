#include<iostream>
using namespace std;
int main(){
     
    // cout<<sizeof(int)<<endl;

    // signed int x = -10;
    // cout<<x<<endl;
    // cout<<sizeof(short int)<<endl;
    
    
    signed int n; 
    cout<<"Enter n:";
    cin>>n;
    int k,sum=0;
    while (n>0){
        k=n%10;
        n=n/10;

        sum+=k;
        sum*=10;
    }

    cout<<"run"<<endl;
    
    cout<<sum/10;
    return 0;
}