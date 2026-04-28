#include<iostream>
using namespace std;
int main(){
    
    int marks[5]={4,2,3,0,-5};
    int ans = 8;
    int size = 5;


    for (int i = 0; i < size; i++){
        if (marks[i]<ans){
            ans = marks[i];
        } 
    }
    
    cout<<"smallest is :"<<ans<<endl;
    
    return 0;
}