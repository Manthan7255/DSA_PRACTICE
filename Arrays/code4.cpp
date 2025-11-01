#include <iostream>
#include <climits> 
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int nums[size];
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> nums[i];
    }

    int smallest = INT_MAX;
    int index = -1;

    for (int i = 0; i < size; i++) {
        if (nums[i] < smallest) {
            smallest = nums[i];
            index = i;
        }
    }

    cout << "Smallest number is: " << smallest << endl;
    cout << "Index of smallest number is: " << index << endl;

    return 0;
}

