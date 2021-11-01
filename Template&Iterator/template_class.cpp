#include<bits/stdc++.h>
using namespace std;

template<typename T,typename U>

class Person{
    public:
    T height;
    U weight;
    static int numOfPeople;
    Person(T h, U w){
        height = h;
        weight = w;
        numOfPeople ++;
    }

    void GetData(){
        cout<< "Height  "<<height<<" weight "<<weight<<endl;
    }
};
template<typename T, typename U> int Person<T,U>::numOfPeople;

int main(){
    Person<double,int> Archishman(150,64);
    Person<double,int> Riju(151,63);
    Archishman.GetData();
    Riju.GetData();

    // ACTUALLY NEEDS OBJECT
    cout<<"Number of people: "<<Archishman.numOfPeople<<endl;
    cout<<"Number of people: "<<Riju.numOfPeople<<endl;
    return 0;
}