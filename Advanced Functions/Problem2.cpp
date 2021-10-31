#include<bits/stdc++.h>
using namespace std;


/* 
PROBLEM: GENERATE A 100 EITHER H/T(s) and then output on the screen the 
number of heads and number of tails that was generated.
*/

/* 
STEPS:
a) FUNCTION: CREATE A RANDOM LIST using a limited number of values i.e id either Heads ot tails
b) FUNCTON: WHICH CHECKS IF THE CURRENT POINTER IS HEAD OR TAIL AND COUNT IT 
*/

vector<char> GetHandTList(vector<char> possibleValues,int numberValuesToGenerate){
    srand(time(NULL));

    vector<char> HandTList;
    for(auto i=0;i<numberValuesToGenerate;i++){
        int randIndex = rand()%2;
        HandTList.push_back(possibleValues[randIndex]);
    }
    return HandTList;
}


int GetNumberOfMatches(vector<char> list, char ValueToFind){
    int numOfMatches=0;

    for(auto i: list){
        if(i==ValueToFind){
            numOfMatches++;
        }
    }
    return numOfMatches;
}

int main(){

    vector<char> possibleValues{'H','T'};
    vector<char> HandTList=GetHandTList(possibleValues,100);

    cout<<"Number of Heads "<<GetNumberOfMatches(HandTList,'H')<<"\n";
    cout<<"Number of Tails "<<GetNumberOfMatches(HandTList,'T')<<"\n";
    return 0;

}
