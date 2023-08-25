#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number to check for prime: ";
    cin>>n;
    int flag=1;
    for (int i=2;i<n;i++){
        if (n%i==0){
            cout<<endl<<"It is not a prime";
            flag=0;
            break;
        }
    }
    if (flag==1){
        cout<<endl<<"It is prime";
    }
}
