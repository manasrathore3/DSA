#include<iostream>
#include <Climits>                 //for infinite
using namespace std;
int main(){
    
    int marks[5]={4,2,3,0,5};
    int Greatest = INT_MIN;           //for -ve infinite value 
    int size = 5;


    for (int i = 0; i < size ; i++){
        if (marks[i]>Greatest
        ){
            Greatest
             = marks[i];
        } 
    }
    
    cout<<"Greatest is :"<<Greatest
    <<endl;
    
    return 0;
}