#include<iostream>
#include<vector>
using namespace std;
int main() {
    int a=10;
    int* ptr=&a; //pointer to an integer variable
    cout<<"Value of a: "<<a<<endl;
    cout<<"Address of a: "<<&a<<endl;
    cout<<"Value stored in ptr: "<<ptr<<endl; //address of a
    cout<<"Value pointed to by ptr: "<<*ptr<<endl; //value of a

    int** ptr2=&ptr; //pointer to a pointer
    cout<<"Value stored in ptr2: "<<ptr2<<endl; //address of ptr
    cout<<"Value pointed to by ptr2: "<<*ptr2<<endl; //value of ptr (address of a)
    cout<<"Address of ptr: "<<&ptr<<"and Value store in ptr 2 is same"<<ptr2<<endl;

    cout<<"Value of a using address of a: "<<*(&a)<<endl; //value of a using address of a
    cout<<*(ptr)<<" is same as value of a: "<<a<<endl; //value of a using pointer

    return 0;
}