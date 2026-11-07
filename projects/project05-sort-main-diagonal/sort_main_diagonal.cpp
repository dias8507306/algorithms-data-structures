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

    // Басты диагональ элементтерін векторға жинау
    vector<int> mainDiagonal;
    for (int i = 0; i < SIZE; i++) {
        mainDiagonal.push_back(arr[i][i]);
    }

    // Сұрыптау
    sort(mainDiagonal.begin(), mainDiagonal.end());

    // Басты диагональға сұрыпталған мәндерді қайта жазу
    for (int i = 0; i < SIZE; i++) {
        arr[i][i] = mainDiagonal[i];
    }

    // Нәтижені шығару
    cout << "Matrix after sorting main diagonal:" << endl;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
