#include<iostream>
#include <limits>                 //for infinite
using namespace std;
int main(){
    
    int marks[5]={4,2,3,0,-5};
    int ans = std::numeric_limits<int>::max();       //for infinite value 
    int size = 5;


    for (int i = 0; i < size ; i++){
        if (marks[i]<ans){
            ans = marks[i];
        } 
    }
    
    cout<<"smallest is :"<<ans<<endl;
    
    return 0;
}