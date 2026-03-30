#include<iostream>
using namespace std;
int factorial(int n){
     
    int fact=1;
    for (int i = 1; i <= n; i++){
        fact*=i;
    }
    
    return fact;
}

int nCr(int n, int r){
    int n_fact = factorial(n);
    int r_fact = factorial(r);
    int x_fact = factorial(n-r);

    int value = n_fact/(r_fact*x_fact);
    return value;
}

int main(){
    cout<<nCr(6,3);

    return 0;
} 