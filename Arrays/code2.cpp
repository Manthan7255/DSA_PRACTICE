#include<iostream>
#include<climits>
using namespace std;
int main() {
    int numbers[7] = {34, 12, 5, 67, 23, 89, 1};
    int smallest = INT_MAX;
    for(int i = 0; i < 7; i++) {
        if(numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }
    cout << "The smallest number in the array is: " << smallest << endl;
    return 0;
}