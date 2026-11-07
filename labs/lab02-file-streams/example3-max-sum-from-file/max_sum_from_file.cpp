#include <iostream>
#include <fstream>
#define N 10
using namespace std;
int main() {
    int i, maxsum = 0, k;
    int arr[N];
    ifstream inf;
    ofstream out;
    inf.open("arr.txt");
    out.open("rez.txt");
    cout << "Read the elements of the array: \n";
    for (i = 0; i < N; i++) {
        inf >> arr[i];
    }
    for (i = 0; i < N - 4; i++) {
        if (arr[i] + arr[i + 1] + arr[i + 2] + arr[i + 3] + arr[i + 4] > maxsum) {
            maxsum = arr[i] + arr[i + 1] + arr[i + 2] + arr[i + 3] + arr[i + 4];
            k = i;
        }
    }
    out << "5 elements with the maximum amount: " << arr[k] << " " << arr[k + 1] << " " << arr[k + 2] << " " << arr[k + 3] << " " << arr[k + 4];
    return 0;
}
