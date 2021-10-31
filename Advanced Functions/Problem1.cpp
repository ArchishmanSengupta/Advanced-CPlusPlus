#include<bits/stdc++.h>
using namespace std;


/* 
PROBLEM: CREATE A FUNCTION THAT RECEIVES A LIST AS WELL AS A FUNCTION 
AND THE FUNCTION IS GOING TO RETURN TRUE OR FALSE IF A LISTVALUE IS ODD
AND THE SURROUNDING FUNCTION WILL RETURN A LIST OF SAID ODD NUMBERS.
*/


bool isOdd(int num){
    if(num&1) return true;
    else return false;
}
vector<int> ChangeList(vector<int> list,function<bool(int)> func){

    vector<int> oddlist;
    for(auto i:list){
       if(func(i)){
           oddlist.push_back(i);
       }
    }
    return oddlist;
}
int main(){
    vector<int> ListOfNums{1,2,3,4,5,6,7,8,9,10};
    vector<int> oddlist= ChangeList(ListOfNums,isOdd);
    cout<<"List of ODDS \n";

    for(auto i: oddlist){
        cout<<i<<" ";
    }

}
