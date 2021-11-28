#include<bits/stdc++.h>
using namespace std;
/*

Generates same numbers as it it saved in same state

*/
void printRandom(default_random_engine e) {
	for (int i = 0; i < 10; i++) {
		cout << e() << " ";
	}
	cout << endl;
}

int main() {
	default_random_engine engineTest;
	default_random_engine engineTest2;

	printRandom(engineTest);
	printRandom(engineTest2);

}