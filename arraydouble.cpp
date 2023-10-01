#include<iostream>
using namespace std;
int main(){
    int arr[500];
    int n;
    cout<<"how many numbers you want to add in array"<<endl;
    cin>>n;
    cout<<"enter the number"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"double";
    for(int i=0; i<n; i++){
        cout<<2*arr[i]<<" ";
    }
}