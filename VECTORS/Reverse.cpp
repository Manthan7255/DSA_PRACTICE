#include<iostream>
#include<vector>
using namespace std;
int ReverseVector(vector<int>& vec) {
    int left = 0;
    int right = vec.size() - 1;
    while (left < right) {
        swap(vec[left], vec[right]);
        left++;
        right--;
    }
    return 0;
}
int main() {
    vector<int> numbers = {34, 12, 5, 67, 23, 89, 1};
    cout << "Original Vector:" << endl;
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    ReverseVector(numbers);

    cout << "Reversed Vector:" << endl;
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}