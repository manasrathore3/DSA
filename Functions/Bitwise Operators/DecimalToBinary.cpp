#include<iostream>
using namespace std;
int decNum(int n){
    int ans=0;
    int m=1;
    while(n>0){

        int decnum = n%2;
        n= n/2;

        ans+=(decnum*m);
        m*=10;
     
    }
    return ans;
}

int main(){
    cout<<decNum(10)<<endl;
    
    return 0;
}
