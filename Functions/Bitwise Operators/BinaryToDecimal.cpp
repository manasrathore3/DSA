#include<iostream>
using namespace std;
int BiToNum(int Binum){
    int ans=0;
    int pow=1;
        while(Binum>0){

          int num = Binum%10;
          Binum= Binum/10;

          ans+=num*pow;
          pow*=2;
     
        }
    return ans;
}ccvbnm

int main(){
    cout<<BiToNum(11001)<<endl;
    
    return 0;
}