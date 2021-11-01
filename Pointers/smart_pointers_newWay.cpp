
// NEW WAY 

#include<bits/stdc++.h>
using namespace std;

//Malloc allocation
int main(){

    // WHENEVER YOU DEFINE A PRIMITIVE TYPE LIKE AN INT, OR FLOAT YOU DEFINE
    // You define exactly how much space is reserved

    // CUSTOM memory allocation
    int amtToStore;
    cout<<"How many numbers to store? "<<endl;
    cin>>amtToStore;
    
    //-------------------------------SMART POINTER----------------------------------
    unique_ptr<int[]> pNums(new int[amtToStore]);
    
    /** NOTE:->
     * a unique_ptr can have only one owner
     * BUT if you want some other owner, we have to use "shared_pointer"
     */

    if(pNums!=NULL){
        int i=0;
        while(i<amtToStore){

            // DONT USE ENDL, AS IT WILL FLUSH THE BUFFER
            // A BUFFER IS MEMORY THAT IS SET ASIDE

            cout<<"Enter a Number: "<<"\n";
            cin>>pNums[i];
            i++;
        }
    }
    cout<<"You entered these Numbers \n";
    for(int i=0;i<amtToStore;i++){
        cout<<pNums[i]<<" ";
    }

    // Because we SET ASIDE the space we need to DELETE PnUMS
    delete pNums;

}