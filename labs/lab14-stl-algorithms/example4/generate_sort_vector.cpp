#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
int random_less_than_50(void) {
	return (rand() % 50);
}
int main(int argc, char* argv[]) {
	// seed the random number generator
	srand(time(0));
	//create a vector with ten random elements(all less than 50)
	vector<int> v;
	back_insert_iterator< vector<int> > back_itr(v);
	generate_n(back_itr, 10, random_less_than_50);
	// display its contents
	ostream_iterator<int> out(cout, " ");
	copy(v.begin(), v.end(), out);
	// sort the vector
	sort(v.begin(), v.end());
	// display its contents, sorted
	cout << endl;
	copy(v.begin(), v.end(), out);
	return EXIT_SUCCESS;
}