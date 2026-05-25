#include<iostream>
#include<climits>
using namespace std;

// void changeArr(int arr[], int size){
//     for (int i = 0; i < size; i++){
//         arr[i]= 2*arr[i];
//     }    
// }

// int main(){
//     int arr[]={1,2,3,4};
//     changeArr(arr,4);

//     for (int i = 0; i < 4; i++){
//         cout<<arr[i]<<endl;
//     }
    
//     return 0;
// }


int main(){
    int smallest = INT_MAX;
    int ans;
    int index;
    
    int arr[]={10,20,30,40};
    for (int i = 0; i < 4; i++){
        if (arr[i]<smallest){
            ans=arr[i];
            index=i;
        }
    }

    cout<<ans<<endl;
    cout<<"Index is: "<<index;
    return 0;
}
