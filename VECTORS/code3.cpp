#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>numbers;
    numbers.push_back(34);//size=1, capacity=1
    numbers.push_back(12);//size=2, capacity=2
    numbers.push_back(5);//size=3, capacity=4
    numbers.push_back(67);//size=4, capacity=4
    numbers.push_back(23);//size=5, capacity=8
    cout<<numbers.size()<<endl;
    cout<<numbers.capacity()<<endl;
}