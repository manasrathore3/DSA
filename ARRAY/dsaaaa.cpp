#include<iostream>
#include<Climits>  
using namespace std;

int bin(int n){
    int rem=0,ans=0,power=1;
    while(n>0){
        rem=n%2;
        n=n/2;

        ans+=rem*power;
        power=power*10;
       
    }
   
    return ans;

}


int main(){
    int small=INT_MAX,big=INT_MIN;
    int size=5, idx_s , idx_b;
    // int marks[size]={1,6,90,1000,-4};
    int marks[]={10,10,10,10,10,90};

    for(int i=0;i<size;i++){
        if(marks[i]<small){
           small=marks[i];
           idx_s=i;
        }

        if(marks[i]>big){
           big=marks[i];
           idx_b=i;
        }

    }
    
    cout<<"Smallest no. is: "<<small<<" and index is:"<<idx_s<<endl;
    cout<<"Biggest no. is: "<<big<<" and index is:"<<idx_b<<endl;

        

    return 0;
}