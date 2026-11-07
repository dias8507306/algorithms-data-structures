#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int i;
    for (i = 0; i < 10; i++)
        v.push_back(i);
    cout << "size = " << v.size() << "\n";
    vector<int>::iterator p = v.begin();
    while (p != v.end()) {
        cout << *p << " ";
        p++;
    }
}
