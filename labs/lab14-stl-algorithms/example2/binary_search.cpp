#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	vector<int> numbers = { 1, 3, 5, 7, 9, 11 };
	int target = 5;
	bool found = binary_search(numbers.begin(), numbers.end(), target);
	if (found) {
		cout << "Element found in the array." << endl;
	}
	else {
		cout << "Element not found in the array." << endl;
	}
	return 0;
}