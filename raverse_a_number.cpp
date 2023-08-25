#include <iostream>
using namespace std;

int main(){

    int n,reverse=0,last_digit;
    
    cout<<"enter a number: ";
    cin>>n;
    cout<<endl;
    
    while(n>0){
        
        last_digit=n%10;
        n=n/10;
        reverse=reverse*10+last_digit;
    }
    cout<<"The reversed number is: "<<reverse;
    return 0;
}
