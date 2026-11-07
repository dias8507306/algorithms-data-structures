#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
void printVector(const vector<int>& vec) {
	for (int i : vec) {
		cout << i << "; ";
	}
	cout << endl;
}
void selectionSort(vector<int>& vec) {
	vector<int>::iterator it;
	for (it = vec.begin(); it != vec.end(); ++it) {
		swap(*it, *min_element(it, vec.end()));
	}
}
int main() {
	vector<int> vec1 = { 43, 5, 123, 94, 359, -23, 2, -1 };
	printVector(vec1);
	selectionSort(vec1);
	printVector(vec1);
	return EXIT_SUCCESS;
}