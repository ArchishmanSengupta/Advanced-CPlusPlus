#include<bits/stdc++.h>
using namespace std;
/*
Stateful generator that generates random values within predefined mina nd max
Not truely random -- pseudorandom

*/

int main() {
	default_random_engine engineTest;
	cout << "Min: " << engineTest.min() << endl;
	cout << "Max: " << engineTest.max() << endl;

	cout << engineTest() << endl;
	cout << engineTest() << endl;


	stringstream state;
	state << engineTest; //save the current state

	cout << engineTest() << endl;
	cout << engineTest() << endl;

	state >> engineTest; // restore the state

	cout << engineTest() << endl;
	cout << engineTest() << endl;


}