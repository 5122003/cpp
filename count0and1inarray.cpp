#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,0,1,0,0,1,0,0,1,0,1,0};
    int size=13;
    int numzero=0;
    int numone=1;
    for(int i=0; i<size; i++){
        if(arr[i]==0){
            numzero++;
        }
        if(arr[i]==1){
            numone++;
        }
    }
    cout<<"number of zero"<<numzero<<endl;
    cout<<"number of one"<<numone<<endl;

}