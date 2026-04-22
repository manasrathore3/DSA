#include<iostream>
using namespace std;
int BiNum(int n){
    int ans=0;
    int pow=1;
    while(n>0){

        int num = n%10;
        n= n/10;

        ans+=num*pow;
        pow*=2;
     
    }
    return ans;
}

int main(){
    cout<<BiNum(100)<<endl;
    
    return 0;
}