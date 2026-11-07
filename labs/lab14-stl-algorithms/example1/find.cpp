#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	vector<int> numbers{ 1, 2, 3, 4, 5, 6, 7, 8 };
	vector<int>::iterator result = find(begin(numbers), end(numbers), 4);
	if (result == end(numbers))
		cout << "Value not found" << endl;
	else
		cout << "Value found at position " << (result - begin(numbers)) << endl;
}