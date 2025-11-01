#include<iostream>
using namespace std;
void changeArray(int arr[], int n){
    for(int i=0;i<n;i++){
        arr[i] = arr[i] * 2;
    }
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
 

    changeArray(numbers, size);

    cout << "Array after modification:\n";
    for(int i=0;i<size;i++){
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}