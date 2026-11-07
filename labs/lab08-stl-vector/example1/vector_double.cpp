#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector<int> v;
	int i;
	for (i = 0;i < 10;i++)
		v.push_back(i);
	for (i = 0;i < 10;i++)
		v[i] = v[i] + v[i];
	for (i = 0;i < v.size();i++)
		cout << v[i] << "" << endl;
}