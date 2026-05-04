#include<iostream>
#include <climits>                 //for infinite
using namespace std;
int main(){
    
    int marks[5]={4,2,3,0,-5};
    int size = 5;
    int smallest = INT_MAX;
    int greatest = INT_MIN;


    for (int i = 0; i < size ; i++){
        if (marks[i]<smallest){
            smallest = marks[i];
        } 
    }

    cout<<"Smallest is :"<<smallest<<endl;
    cout<<"Greatest is :"<<greatest<<endl;


    /* 2'nd method using min function */
    // for (int i = 0; i < size ; i++){
    //     smallest = min(marks[i],smallest);
    //     greatest = max(marks[i],greatest);
    // }
 
    // cout<<"Smallest Ka Index :"<<smallest<<endl;
    // cout<<"Greatest Ka Index :"<<greatest<<endl;
    


    // print index of greatest and smallest numbers ?


    
    return 0;
}