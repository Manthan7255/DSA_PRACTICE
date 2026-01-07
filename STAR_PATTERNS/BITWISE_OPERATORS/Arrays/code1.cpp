#include<iostream>
using namespace std;
int main() {
    int marks[5] = {85, 90, 78, 92, 88};
    cout << "Marks of students:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "Student " << (i + 1) << ": " << marks[i] << endl;
    }
    return 0;
}