#include<iostream>
using namespace std;
int ReverseArray(int arr[], int n){
    int start = 0;
    int end = n - 1;
    while(start < end){
        // Swap arr[start] and arr[end]
        /*swap(arr[start], arr[end]);
        start++;
        end--;*/
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }   
    return 0;
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

    ReverseArray(numbers, size);

    cout << "Reversed array:\n";
    for(int i=0;i<size;i++){
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}