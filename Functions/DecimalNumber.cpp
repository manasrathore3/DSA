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
    for (int i = 2; i < 10; i++)
    {
        cout<<decNum(i)<<endl;
    }
    
    return 0;
}
