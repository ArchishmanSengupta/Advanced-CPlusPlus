#include<bits/stdc++.h>
using namespace std;


/* 
NOTES:
git 
1. A const function can only call another const function
in order to maintain the const correctness.
2. The CONST can be used to overload with a NON-CONST function 
3. A function that takes a "const reference parameter" can also be
overloaded with the function that takes a "reference parameter".

Summary:
When a CONST is used with a function, it can used to specify const parameter or
const return value or const function

*/

// const used with function
class Dog{
    int age;
    string name;
    public:
    Dog(){
        age=3;
        name="Tommy";
    }
    /* REMEMBER THAT THE ARG IS PASSED BY REFERENCE WHICH 
     ULTIMATELY CHANGES I in the main function
    */
    
    void setAge(const int& a){age=a;
        // INCREMENT A BY 1
        //a++;}


        // PASS BY VALUE, MAKES A COPY
        // void setAge(const int a){}

        // Const return value
        const string& getName(){return name;}

        // Const function 
        // this const will not change any of the member variables of the class
        void printDogName() const {
            cout<<"const"<<"\n";
            //age++; // ERROR
        }

    
};
int main(){
    Dog d;

    int i=9;

    // I DONT WANT THE SetAge function to change it, we use (const int a)

    d.setAge(i);
    cout<<i<<"\n";

    // STRING
    const string& n=d.getName();
    cout<<n<<"\n";

    //Const functions 
    d.printDogName();
}