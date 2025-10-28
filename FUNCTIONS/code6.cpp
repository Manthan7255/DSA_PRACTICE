#include<iostream>
using namespace std;
int sum(int a , int b){
    int s=a+b;
    return s;
}

int main(){
    int x=4;
    int y=7;
    cout << sum(x, y)<<endl;
}