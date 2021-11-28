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

	//diff sequence of numbers
	// not same time
	// seed determined internal state of an engine

	unsigned seed = chrono::steady_clock::now().time_since_epoch().count();
	default_random_engine e3(seed);
	printRandom(e3);

	// RESET Engine to initial state

	engineTest.seed();
	engineTest.seed(109);
	engineTest2.seed(109);


	if (engineTest == engineTest2) {
		cout << "engineTest and engineTest2 have same state" << endl;
	}

	vector<int> d = {1, 2, 3, 4};
	shuffle(d.begin(), d.end(), default_random_engine());


}