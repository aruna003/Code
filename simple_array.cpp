// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"input n: ";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"input ele: ";
        cin>>arr[i];
        // cout<<"i: "<<i;
    }
    // you cant print an array directly like this as in python
    // # cout<<arr;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
