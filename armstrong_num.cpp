#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main(){

    int n,req_num=0,last_digit;
    
    cout<<"enter a number: ";
    cin>>n;
    // original number n keeps changing since nis kept on dividing
    int original_n=n;
    cout<<endl;
    
    while(n>0){
        
        last_digit=n%10;
        n=n/10;
        req_num+= pow(last_digit,3);
    }

    string result=(req_num==original_n)?"a armstong": "not an armstrong";
    
    cout << "It is "<< result << " number.";
    
    return 0;
}
