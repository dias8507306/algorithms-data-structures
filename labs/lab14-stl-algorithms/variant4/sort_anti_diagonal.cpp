#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    const int SIZE = 3;
    int arr[SIZE][SIZE] = {
        {8, 2, 9},
        {4, 5, 6},
        {10, 8, 7}
    };

    // Кері диагональ элементтерін векторға жинау
    vector<int> reverseDiagonal;
    for (int i = 0; i < SIZE; i++) {
        reverseDiagonal.push_back(arr[i][SIZE - 1 - i]);
    }

    // Сұрыптау
    sort(reverseDiagonal.begin(), reverseDiagonal.end());

    // Кері диагональға сұрыпталған мәндерді қайта жазу
    for (int i = 0; i < SIZE; i++) {
        arr[i][SIZE - 1 - i] = reverseDiagonal[i];
    }

    // Нәтижені шығару
    cout << "Matrix after sorting reverse diagonal:" << endl;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
