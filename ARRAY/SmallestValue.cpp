#include<iostream>
#include <climits>                 //for infinite
using namespace std;
int main(){
    
    int marks[5]={4,2,3,0,-5};
    int size = 5;
    int smallest = INT_MAX;


    for (int i = 0; i < size ; i++){
        if (marks[i]<smallest){
            smallest = marks[i];
        } 
    }
    
    cout<<"Smallest is :"<<smallest<<endl;
    
    return 0;
}