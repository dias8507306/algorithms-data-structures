#include <fstream>
#include <iostream>
#include <cstdlib>

using namespace std;

int main(int args, char* argv[]) {
    ifstream inf;
    inf.open("somefile.txt");
    if (!inf) {
        cerr << "Could not open file!" << endl;
        cin.get();
        return EXIT_FAILURE;
    }
    int x;
    while (inf >> x) {
        cout << x << endl;
    }
    inf.close();
    cin.get();
    return EXIT_SUCCESS;
}
