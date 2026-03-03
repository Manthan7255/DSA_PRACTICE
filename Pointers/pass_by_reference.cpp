#include<iostream>
#include<vector>
using namespace std;

int changeValue(int &x) { //pass by reference using reference variable
    x = x + 10; //modifying the value of x
    return x; //returning the modified value
}
int main() {
    int a = 5;
    cout << "Value of a before function call: " << a << endl; //5
    int modifiedValue = changeValue(a); //passing a by reference
    cout << "Value of a after function call: " << a << endl; //15
    cout << "Modified value returned by function: " << modifiedValue << endl; //15
    return 0;
}