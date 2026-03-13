#include<iostream>
using namespace std;
int main(){
   

    int n,num;
    cout<<"Enter N :" ;
    cin>>n;

    for (int i = 0; i < n; i++){               //13th ques normal type
        for (int j = 0; j < i+1; j++){
            cout<<"* ";
        }cout<<endl;
    }
    for(int i = 0;  i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            cout<<"* ";
        }cout<<endl;
    }   
      
    
    for (int i = 0; i < n; i++){               // 14th ques opposite type
        for (int j = 0; j < n-i-1; j++){
            cout<<"  ";
        }
        for (int j = 0; j < i+1; j++){
            cout<<"* ";
        }cout<<endl;
    }
    for(int i = 0;  i < n-1; i++){
        for(int j = 0; j < i+1; j++){
            cout<<"  ";
        }
        for(int j = 0; j < n-i-1; j++){
            cout<<"* ";
        }cout<<endl;
    }
    

    
    return 0;
}
