#include <iostream>

void removeFirstNegative(int arr[], int& size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            for (int j = i; j < size - 1; j++) {
                arr[j] = arr[j + 1];
            }
            arr[size - 1] = 0;
            return; // Stop after removing the first negative element
        }
    }
}

int main() {
    int arr[] = { 3, -2, 5, -7, 8, -1 };
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Initial array: ";
    for (int i = 0; i < size; i++) std::cout << arr[i] << " ";
    std::cout << "\n";

    removeFirstNegative(arr, size);

    std::cout << "Array after removing the first negative element: ";
    for (int i = 0; i < size; i++) std::cout << arr[i] << " ";
    std::cout << "\n";

    return 0;
}
