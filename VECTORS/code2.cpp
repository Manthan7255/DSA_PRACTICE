#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> numbers = {34, 12, 5, 67, 23, 89, 1};

    cout<<"Size of the vector is: "<<numbers.size()<<endl;
    numbers.push_back(100);
    cout<<"Size of the vector after push_back is: "<<numbers.size()<<endl;
    for(int i: numbers){
        cout<<i<<endl;//i stores the value not the index
    }
    numbers.pop_back();
    cout<<"Size of the vector after pop_back is: "<<numbers.size()<<endl;
    for(int i: numbers){
        cout<<i<<endl;//i stores the value not the index
    }
    cout<<"First Element of Vector is: "<<numbers.front()<<endl;
    cout<<"Last Element of Vector is: "<<numbers.back()<<endl;
    cout<<"Element at index 3 is: "<<numbers.at(3)<<endl;
    return 0;
}