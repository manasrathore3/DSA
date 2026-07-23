#include<iostream>
#include <Climits>                              //for infinite
using namespace std;
int main(){   
    
    int size=5;
    int arr[size]={-1,2,3,40,8};
    int largest = INT_MIN;                     //for -ve infinite value 
    int smallest = INT_MAX;                    //for +ve infinite value 

    for (int i = 0; i < size ; i++){
        if (arr[i]>largest){
            largest=arr[i];
        }
    }
    for (int i = 0; i < size ; i++){
        if (arr[i] < smallest){
            smallest=arr[i];
        }
    }


    //////////By the in built function min()
    // for (int i = 0; i < size ; i++){
    //     smallest = min(arr[i],smallest);
    //     largest = max(arr[i],largest);
    // }
    



    cout<<"Smallest no. is:"<<smallest<<endl;
    cout<<"Greatest no. is:"<<largest;

    
    
    return 0;
}