#include<iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int* ptr = arr; //pointer to the first element of the array
    
    cout << "Elements of the array using pointer: ";
    cout << *ptr << " "; //accessing the first element using pointer
    cout<< *(ptr+1) << " "; //accessing the second element using pointer arithmetic
    cout<< *(ptr+2) << " "; //accessing the third element using pointer
    cout<< *(ptr+3) << " "; //accessing the fourth element using pointer
    cout<< *(ptr+4) << " "; //accessing the fifth element using pointer
    cout << endl;
}