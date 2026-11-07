#include <cstdlib>
#include <iostream>
using namespace std;

int* form(int& n) {
    cout << "Enter n\n";
    cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; i++)
        a[i] = rand() % 100;
    return a;
}

void print(int* a, int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " "; cout << "\n";
}

int* Dell(int* a, int& n) {
    int k, j, i;
    for (k = 0, i = 0; i < n; i++)
        if (a[i] != a[0]) k++;
    int* b;
    b = new int[k];
    for (j = 0, i = 0; i < n; i++)
        if (a[i] != a[0]) {
            b[j] = a[i]; j++;
        }
    n = k;
    return b;
}

int main() {
    int* a;
    int n;
    a = form(n);
    print(a, n);
    a = Dell(a, n);
    print(a, n);
    return 0;
}
