#include <iostream>
using namespace std;

int main() {
    int n = 4;     // number of rows
    char ch = 'A'; // starting character

    for (int i = 0; i < n; i++) {
        // print leading spaces
        for (int j = 0; j < i; j++) {
            cout << "  "; // two spaces for alignment
        }

        // print characters
        for (int j = 0; j < n - i; j++) {
            cout << ch << " ";
        }

        cout << endl;
        ch++; // move to next alphabet after each row
    }

    return 0;
}
