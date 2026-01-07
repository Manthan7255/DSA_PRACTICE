#include<iostream>
using namespace std;
int Intersection(int arr1[], int n1, int arr2[], int n2){
    cout << "Intersection elements are:\n";
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(arr1[i] == arr2[j]){
                cout << arr1[i] << " ";
                break; // To avoid printing duplicates if arr2 has repeated elements
            }
        }
    }
    cout << endl;
    return 0;
}
int main(){
    int size1, size2;
    cout << "Enter the size of the first array: ";
    cin >> size1;

    int array1[size1];
    cout << "Enter " << size1 << " elements for the first array:\n";
    for(int i=0;i<size1;i++){
        cin >> array1[i];
    }

    cout << "Enter the size of the second array: ";
    cin >> size2;

    int array2[size2];
    cout << "Enter " << size2 << " elements for the second array:\n";
    for(int i=0;i<size2;i++){
        cin >> array2[i];
    }

    Intersection(array1, size1, array2, size2);

    return 0;
}