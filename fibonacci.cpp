#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int fibonacci(int n){
    // the inner () for conditions is very necessary
    if ((n==0) || (n==1)){
        return 1;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
int main(){

    int n;
    
    cout<<"enter a number limit for fibonacci: ";
    cin>>n;
    cout<<endl;
    for (int i=0;i<n;i++){
        
        cout<<fibonacci(i)<<" ";
    }
    return 0;
}
