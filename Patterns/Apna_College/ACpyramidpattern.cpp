#include<iostream>
using namespace std;
int main(){
   
    int n,num;
    cout<<"Enter N :" ;
    cin>>n;
     
//    num=1;                               floyd's Triangle Pattern
//    for(int i = 0 ; i < n ; i++){
//        for(int j = 0 ; j < i+1 ;j++){
//           cout<<num<<" ";
//           num++;
//        }
//        cout<<endl;
//    }


//                                         floyd's Triangle Pattern For ABCD
//    char ch='A';
//    for(int i = 0 ; i < n ; i++){
//        for(int j = 0 ; j < i+1 ;j++){
//           cout<<ch<<" ";
//           ch++;
//        }
//        cout<<endl;
//    }


// for(int i = 0 ; i < n; i++){              //number triangle 
//     for (int k = 0; k < i; k++){
//         cout<<"  ";
//     }
//     for(int j = 0; j < n-i; j++){
//         cout<<i+1<<" ";
//     }
//     cout<<endl;
// }
     
                                        //       1
                                        //      121
                                        //     12321
                                        //    1234321

// for (int i = 0; i < n; i++){ 
//     for (int j = n; j > i+1; j--){
//         cout<<" ";
//     }
//     for (int k = 0 ; k < i+1 ; k++){
//         cout<<k+1;
//     }
//     // for (int j = i; j <= i; j++){
//     //    cout<<i;
//     // }
//     for (int j = i; j >= 1   ; j--){
//             cout<<j;
//         }
//     cout<<endl;
// }

    
   return 0;
}   