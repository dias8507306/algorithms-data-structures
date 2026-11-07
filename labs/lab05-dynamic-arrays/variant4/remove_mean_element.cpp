#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

void removeMeanElement(std::vector<int>& arr) {
    if (arr.empty()) return;

    double mean = std::accumulate(arr.begin(), arr.end(), 0.0) / arr.size();

    auto it = std::remove_if(arr.begin(), arr.end(), [mean](int x) {
        return x == static_cast<int>(mean);
        });

    arr.erase(it, arr.end());
}

int main() {
    int n;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    std::vector<int> arr(n);
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    removeMeanElement(arr);

    std::cout << "Processed array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}