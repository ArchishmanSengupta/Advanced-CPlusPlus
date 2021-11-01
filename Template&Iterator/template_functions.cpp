#include<bits/stdc++.h>
using namespace std;

template<typename T>
void Times2(T val){
    std:: cout<<val<<" * 2= "<<val*2<<"\n";
}

template<typename T>
T Add(T val, T val2){
    return val+val2;
}

template<typename T>
T Max(T val, T val2){
    return (val<val2) ? val2 : val;
}

int main(){
    Times2(5);
    Times2(3.4);
    cout<<Add(5,4)<<endl;
    cout<<Max(4,5)<<endl;
    cout<<Max('A','B')<<endl;
    return 0;
}