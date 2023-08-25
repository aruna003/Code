#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    
    // Traversing a vector
    // Normal way
    cout<<"Method1"<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl<<"Method2 "<<endl;
    
    // Using vector iterator. It direcrtly gives the elements.
    // it is a pointer
    vector<int>::iterator it;
    for(it=v.begin(); it!=v.end(); it++){
        cout<<*it<<endl;
    }
    cout<<"Method3"<<endl;
    // using auto -assigns datatype automatically
    for(auto element:v){
        cout<<element<<" ";
    }
    
    // pop elements
    v.pop_back(); 
}
