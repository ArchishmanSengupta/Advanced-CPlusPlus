#include<bits/stdc++.h>
using namespace std;

// CONST-> A COMPILE TIME CONSTRAINT THAT AN OBJECT CAN NOT BE MODIFIED

int main(){

    system("cls");
    
    // 1. NON MIDIFIABLE
    const int x=5;
    const int* i=&x;
    // i=6; // error: assignment of read-only variable 'i'

    //a. TRICK IS TO MAKE IT CONST_CAST

    int *change=const_cast<int *> (i);
    *change=6;
    cout<<*change;

    // 2. DATA IS CONST, POINTER IS NOT
    const int *p1 = &i;
    p1++;

    // 3. POINTER IS CONST, DATA IS NOT
    int* const p2;

    // 4. DATA AND POINTER ARE BOTH CONST 
    // const *int const p3;


    int const *p4=&i;
    const int *p4=&i;

    
    // TRICK [IMPORTANT]

    /**
     * IF CONST IS ON THE LEFT OF * DATA IS CONST
     * IF CONST IS ON THE RIGHT OF * POINTER IS CONST
    */

   // 5. INT TO CONST VALUE
   int j;
   static_cast<const int&>(j)=7;


   /**
    * Why use const?
    * a.) Guards against inadvertent write to variable.
    * b) Self Documenting
    * c) Enables compiler to do more optimization , maing code tighter
    * d) const means the variable  can be put in ROM
   */

}