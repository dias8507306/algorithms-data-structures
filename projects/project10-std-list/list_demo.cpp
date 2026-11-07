#include <iostream>
#include <list>
using namespace std;

// Note: the original draft did not compile (missing "()" after main, missing ";"
// and "using namespace std"); fixed for the portfolio.
int main() {
	list<int> l = { 1,2,3,4,5,6 };

	for (int x : l)
		cout << x << " ";
	cout << endl;
	return 0;
}
