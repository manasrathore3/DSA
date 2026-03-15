#include<iostream>
#include<iomanip>
using namespace std;
int main(){

    int n,num;
    cout<<"Enter N : ";
    cin>>n;

    // for (int i = 0; i < n; i++){                      //23
    //     for (int j = 0; j < n-i-1; j++){
    //         cout<<"  ";
    //     }
    //     for (int j = 0; j < 2*i+1; j++){
    //         cout<<"1 ";
    //     }
    //     cout<<endl;
    // }
      
    // num=1;
    // for (int i = 0; i < n; i++){                        //24
    //     for (int j = 0; j < n-i-1; j++){
    //         cout<<"  ";
    //     }
    //     for (int j = 0; j < 2*i+1; j++){
    //         cout<<num<<" ";
    //     }
    //     cout<<endl;
    //     num=num+1;
    // }

    
    // num=1;                                             //25 
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < n-i-1; j++){
    //         cout<<"   ";
    //     }
    //     for (int j = 0; j < 2*i+1; j++){
    //         if (i<=2 ){
    //             cout<<"  "<<num;
    //         }
    //         if (i>2){
    //             cout<<" "<<num;
    //         }
    //         num++;
    //     }
    //     cout<<endl;
    // }


    // for (int i = 0; i < n; i++){                        //26
    //     num=1;                                       
    //     for (int j = 0; j < n-i-1; j++){
    //         cout<<"  ";
    //     }
    //     for (int j = 0; j < 2*i+1; j++){
    //         cout<<num<<" ";
    //         num+=1;
    //     }
    //     cout<<endl;
    // }
     

    num=1;
    for (int i = 0; i < n; i++){                           //27                      
        for (int j = 0; j < n-i-1; j++){
            cout<<"  ";
        }
        for (int j = 0; j < i+1; j++){
            cout<<j+1<<" ";
        }
        if (i!=0){
            for (int j = num; j > 0; j--){
                cout<<j<<" ";
            }num=num+1;
        }cout<<endl;
    }    
        
      
    return 0;
}