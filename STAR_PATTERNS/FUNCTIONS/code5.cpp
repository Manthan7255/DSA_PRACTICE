#include<iostream>
using namespace std;
int nFactorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int main(){
    int num;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    cout<<"The factorial of "<<num<<" is "<<nFactorial(num)<<endl;
}