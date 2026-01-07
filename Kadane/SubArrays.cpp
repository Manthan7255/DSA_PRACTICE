#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "All subarrays are: " << endl;
    for(int st=0; st<n; st++){
        for(int en=st; en<n; en++){
            for(int k=st; k<=en; k++){
                cout << arr[k];
            }
            cout <<" ";
        }
        cout << endl;
    }
    return 0;
}
