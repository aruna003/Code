// Online C compiler to run C program online
#include <stdio.h>
#include<vector>
int main() {
    vector<int> v;
    
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    
    // Traverse
    cout<<"Method1"<<endl;
    for (i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"Method2"<<endl;
    // Iterator
    vector<int>::iterator it;
    for (it=v.begin; it!=v.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    // using auto keyword
    cout<<"Method3"<<endl;
    for(auto element:v){
        cout<<element<<" ";
    }

    return 0;
}
