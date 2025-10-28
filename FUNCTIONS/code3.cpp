#include<iostream>
using namespace std;
int maxOfTwo(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    int num1, num2;
    cout<<"Enter two numbers: "<<endl;
    cin>>num1>>num2;
    cout<<"The maximum of "<<num1<<" and "<<num2<<" is "<<maxOfTwo(num1, num2)<<endl;
}