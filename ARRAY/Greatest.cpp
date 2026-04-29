#include<iostream>
#include <Climits>                 //for infinite
using namespace std;
int main(){
    
    int marks[5]={4,2,3,0,5};
    int ans = INT_MIN;           //for -ve infinite value 
    int size = 5;


    for (int i = 0; i < size ; i++){
        if (marks[i]>ans){
            ans = marks[i];
        } 
    }
    
    cout<<"Greatest is :"<<ans<<endl;
    
    return 0;
}