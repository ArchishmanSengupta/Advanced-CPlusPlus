#include<bits/stdc++.h>
using namespace std;

// 1. NORMAL STUFF
double MultiplyBy2(double num){
    return num*2;
}
// 2. CALL FUNCTION INSIDE A FUNCTION
double DoMath(function<double(double)> func,double num){
    return func(num);
}
// 3. Store functions in a vector
double MultiplyBy3(double num){
    return num*3;

}
int main(){

    auto times2=MultiplyBy2;
    cout<<times2(5)<<endl;

    cout<<DoMath(times2,5)<<endl;

    vector<function<double(double)>> funcs(2);
    funcs[0]=MultiplyBy2;
    funcs[1]=MultiplyBy3;

    cout<<"2 X 10 = "<<funcs[0](10)<<"\n";

}