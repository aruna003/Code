// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

int main() {

    string str="dsvSDAdfs";
    cout<<str<<endl;
    for (int i=0; i!=str.size(); i++){
        if ((str[i]>='a') && (str[i]<='z')){
            str[i]-=32;
        }
        else{
            str[i]+=32;
        }
    }
    cout<<str<<endl<<endl;
    
    // char b=3+'b';
    // int c='c';
    // cout<<b<<" "<<c;
    return 0;
}
