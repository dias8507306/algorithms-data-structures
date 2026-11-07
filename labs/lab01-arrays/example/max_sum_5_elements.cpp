#include <iostream>
using namespace std;

int main()
{
    int i, maxsum = 0, K;
    int arr[10];
    cout << "Enter the elements of the array: \n";
    for (i = 0; i < 10; i++) {
        cout << "arr[" << i << "]=";
        cin >> arr[i];
    }

    for (i = 0; i < 10 - 4; i++) {
        if (arr[i] + arr[i + 1] + arr[i + 2] + arr[i + 3] + arr[i + 4] > maxsum) {
            maxsum = arr[i] + arr[i + 1] + arr[i + 2] + arr[i + 3] + arr[i + 4];
            K = i;
        }
    }

    cout << "5 elements with the maximum amount: " << arr[K] << " " << arr[K + 1] << " " << arr[K + 2] << " " << arr[K + 3] << " " << arr[K + 4];
    return 0;
}


