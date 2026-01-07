#include<iostream>
using namespace std;
int UniqueElements(int arr[], int n){
    cout << "Unique elements in the array are:\n";
    for(int i=0;i<n;i++){
        bool isUnique = true;
        for(int j=0;j<n;j++){
            if(i != j && arr[i] == arr[j]){
                isUnique = false;
                break;
            }
        }
        if(isUnique){
            cout << arr[i] << " ";
        }
    }
    cout << endl;
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

    UniqueElements(numbers, size);

    return 0;
}