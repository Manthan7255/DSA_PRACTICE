#include<iostream>
using namespace std;
int SwapMinMax(int arr[], int n){
    int minIndex = 0;
    int maxIndex = 0;

    for(int i=1;i<n;i++){
        if(arr[i] < arr[minIndex]){
            minIndex = i;
        }
        if(arr[i] > arr[maxIndex]){
            maxIndex = i;
        }
    }

    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;

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

    SwapMinMax(numbers, size);

    cout << "Array after swapping min and max elements:\n";
    for(int i=0;i<size;i++){
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}