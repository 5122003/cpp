#include<iostream>
using namespace std;

int main(){
    /*
   int arr[10];
   cout<<" Enter the value in arry"<<endl;
   for(int i=0;i<10; i++){
       cin>>arr[i];
   }
   for(int i=0; i<10; i++){
       cout<<arr[i]<<" ";
   }
   */
   int arr[5]={1,4,5,2,5};
   for(int i=0; i<5;i++){
       arr[i]=1;
   }
   for(int i=0; i<5; i++){
       cout<<arr[i]<<" ";
   }
}