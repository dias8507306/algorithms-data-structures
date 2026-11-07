#include <cstdlib>
#include <iostream>
using namespace std;

int** form_matr(int n, int m) {
    int** matr = new int* [n];
    for (int i = 0; i < n; i++) {
        matr[i] = new int[m];
    }
    return matr;
}

void zapolnen(int** matr, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matr[i][j] = rand() % 10;
        }
    }
}

void printArray(int** matr, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matr[i][j] << " ";
        }
        cout << "\n";
    }
}

void dell(int** matr) {
    delete[] matr;
    matr = NULL;
}

int main() {
    int n, m;
    int i, j;
    cout << "\nEnter n=";
    cin >> n; //колдар
    cout << "\nEnter m=";
    cin >> m; //бағандар
    int** matr = form_matr(n, m);
    zapolnen(matr, n, m);
    cout << "Matr\n";
    printArray(matr, n, m);
    int k;
    cout << "\nEnter k from 0 to" << n << endl;
    cin >> k;
    int** temp = form_matr(n - 1, m);
    int t;
    for (i = 0, t = 0; i < n; i++) {
        if (i != k) {
            for (j = 0; j < m; j++) {
                temp[t][j] = matr[i][j];
            }
            t++;
        }
    }
    dell(matr);
    n--;
    cout << "Temp\n";
    printArray(temp, n, m);
    dell(temp);
    return 0;
}