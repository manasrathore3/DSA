#include<iostream>
using namespace std;
// void primeCheck(int n){
    
//     int count=0;
//     for (int i = 2; i < n; i++){
//         if (n%i==0){
//             count++;
//         }
//     }
//     if(count>0){
//         cout<<"Number not prime"<<endl;
//     }
//     else{
//         cout<<"Number is prime"<<endl; 
//     }
    
// }

int primeCheck(int n){
    
    for (int i = 3; i < n-1; i++){
        if (n%i==0){
            cout<<"Not Prime"<<endl;
        } 
        else{
            cout<<"Prime"<<endl;
            return;
        }
    }

}

int main(){
    primeCheck(41);
    return 0;
}