#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream onf;
    onf.open("output.txt");
    if (!onf) { // Check to see if file opened
        cerr << "Could not open file!" << endl;
        return EXIT_FAILURE;
    }
    for (int i = 1; i <= 10; i++) {
        onf << "This is line " << i << endl;
    }
    onf.close(); // Close the output file
}
