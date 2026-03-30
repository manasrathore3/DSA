#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter N : ";
    cin>>n;
    int mid=n/2+1;
    
    // for (int i = 0; i < n; i++){
    //    for (int j = 0; j < i; j++){
    //        cout<<"  ";
    //    }cout<<"* ";
    //    if (i!=n-1){
    //       for(int j = 0; j < (2*(n-i)-3); j++){
    //           cout<<"  ";
    //    }cout<<"* ";
    //    }
    //    cout<<endl;
    // }

    // for (int i = 0 ; i < n-1; i++){
    //     for (int j = 0; j < n-i-2; j++){
    //         cout<<"  ";
    //     }cout<<"* ";
    //     for (int j = 0; j < (2*i+1); j++){
    //         cout<<"  ";
    //     }cout<<"* ";
    //     cout<<endl; 
      
    // }

    //   different type of pattern using 
    // for (int i = 0; i < mid; i++){
    //     for (int j = 0; j < i; j++){
    //         cout<<"  ";
    //     }cout<<"* ";
    //     for (int j = 0; j < 2*(mid-i)-3; j++){
    //         cout<<"  ";
    //     }if (i!=mid-1){
    //         cout<<"* "; 
    //     }
    //     cout<<endl;   
    // }
    // for (int i = 0; i < mid-1; i++){
    //     for (int j = 0; j < mid-2-i; j++){
    //         cout<<"  ";
    //     }cout<<"* ";
    //     for (int j = 0; j < 2*i+1; j++){
    //         cout<<"  ";
    //     }cout<<"* "; 
    //     cout<<endl;   
    // }
    

    return 0;
}

