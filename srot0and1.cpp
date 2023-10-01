#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{0,1,0,1,1,0,1,0,1,1};
    int start=0;
    int end=arr.size()-1;
    int i=0;
    while(i!=end){
        cout<<"for i="<<i<<"start="<<start<<"end="<<end<<endl;
        if(arr[i]==0){
            cout<<"found zero"<<endl;
            cout<<"before swap";
            printArray(arr);
            swap(arr[start],arr[i]);
            cout<<"after swap";
            printArray(arr);
            start++;
            i++
            cout<<"now i="<<i<<"start="<<start<<"end="<<end<<endl;
            
        }
        else{
            cout<<"found one"<<endl;
            cout<<"before swap";
            printArray(arr);
            swap(arr[end],arr[i]);
            cout<<"after swap";
            printArray(arr);
            end--;
        }
    }
}