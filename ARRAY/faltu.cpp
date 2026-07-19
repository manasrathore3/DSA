#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;

    if (x<0){
      int y=0;
        while(x<0){
          y=y*10;
          y+=x%10;
          x=x/10;
        }  
        cout<<y;

      int z=0;
        while(y<0){
          z=z*10;
          z+=y%10;
          y=y/10;
        }
        cout<<z;

    }else{
        int y=0;
          while(x>0){
          y=y*10;
          y+=x%10;
          x=x/10;
        }
        cout<<y<<endl;

        int z=0;
          while(y>0){
          z=z*10;
          z+=y%10;
          y=y/10;
        }
        cout<<z;
        
    }
    
    
    return 0;
}