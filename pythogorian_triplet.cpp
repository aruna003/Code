// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

bool py_triplet(int a,int b,int c){
    int x=max(a,max(b,c));
    if (x==b){
        b=a;
        a=x;
    }
    else if(x==c){
        c=a;
        a=x;
    }
    if ((a*a)==((b*b)+(c*c))){
        return true;
    }
    else{
        return false;
    }
    
}

int main() {
    // Write C++ code here
    int a,b,c;
    cin>>a>>b>>c;
    if (py_triplet(a,b,c)){
        cout<<"Pythagorian triplet";
    }
    else{
        cout<<"Not a Pythagorian triplet";

    }
    return 0;
}
