#include<iostream>
using namespace std;
int main(){
   

    int n,num;
    cout<<"Enter N :" ;
    cin>>n;
         
    // for (int i = 0; i < n; i++){                 //29th Question
    //     for (int j = 0; j < n-i-1; j++){
    //         cout<<"  ";
    //     }cout<<i+1<<" ";
    //     if (i!=0){
    //         for (int j = 0; j < 2*i-1; j++){
    //             cout<<"0 ";
    //         }cout<<i+1<<" ";
    //     }
    //     cout<<endl;
    // }

    // for (int i = 0; i < n; i++){                 //30th Question
    //     for (int j = n; j > 0; j--){
    //        cout<<j<<" ";
    //     }cout<<endl;
        
    // }


                                                
    // num=1;                                       //31Question different style
    // for (int i = 0; i < n; i++){     
    //     num=i;
    //     for (int j = n; j >= i+2 ; j--){
    //         cout<<j<<" ";
    //     }cout<<"* ";
    //     if(i!=0){
    //         for (int j = 0; j < i; j++){
    //             cout<<num<<" ";
    //             num--;
    //         }
    //     }cout<<endl;
    // }

        
    //31Question different style much smarter use from myself
    for (int i = 0; i < n; i++){                    
        for (int j = n; j > 0; j--){
            if (i!=j-1){
                cout<<j<<" ";
            }else{
                cout<<"* ";
            }
        }
        cout<<endl; 
    }
    
    
    
    
    return 0 ;
}