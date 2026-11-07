#include <iostream>
#include <cstdlib>
#include <ctime>
#include <list>
#include <algorithm>
#include <iterator>
using namespace std;
int random_less_than_50(void) {
	return (rand() % 50);
}
int main(int argc, char* argv[]) {
	// seed the random number generator
	srand(time(0));
	// create a list with ten random elements (all less than 50)
	list<int> ls;
	back_insert_iterator< list<int> > back_itr(ls);
	generate_n(back_itr, 10, random_less_than_50);
	// display its contents
	ostream_iterator<int> out(cout, " ");
	copy(ls.begin(), ls.end(), out);
	// Sort the list. The following can NOT be used since lists
	// do not provide random access iterators sort(ls.begin(), ls.end());
	ls.sort();
	// display its contents again
	cout << endl;
	copy(ls.begin(), ls.end(), out);
	return EXIT_SUCCESS;
}