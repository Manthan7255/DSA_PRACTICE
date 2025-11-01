#include<iostream>
using namespace std;
int linearSearch(int arr[], int n, int target){
    for(int i=0;i<n;i++){
        if(arr[i] == target){
            return i; // Return the index if found
        }
    }
    return -1; // Return -1 if not found
}
int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int numbers[size];
    cout << "Enter " << size << " elements:\n";
    for(int i=0;i<size;i++){
        cin >> numbers[i];
    }

    int target;
    cout << "Enter the element to search for: ";
    cin >> target;

    int result = linearSearch(numbers, size, target);
    if(result != -1){
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}