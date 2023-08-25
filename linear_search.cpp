#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int linear_search(int n,int arr[], int key){

    for (int i=0;i<n;i++){
        if (arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){

    int n,key;
    cout<<"enter a length of array: ";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        // cout<<endl<<"Enter element: ";
        cin>>arr[i];
    }
    cout<<endl<<"Input element to be searched: ";
    cin>>key;
    int index = linear_search(n,arr,key);
    if (index==-1){
        cout<<"Element not in array";
    }
    else{
