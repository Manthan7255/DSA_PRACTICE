#include<iostream>
using namespace std;
int CalSum(int arr[], int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    return sum;
}
int CalProduct(int arr[], int n){
    int product = 1;
    for(int i=0;i<n;i++){
        product *= arr[i];
    }
    return product;
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

    int sum = CalSum(numbers, size);
    int product = CalProduct(numbers, size);

    cout << "Sum of array elements: " << sum << endl;
    cout << "Product of array elements: " << product << endl;

    return 0;
}