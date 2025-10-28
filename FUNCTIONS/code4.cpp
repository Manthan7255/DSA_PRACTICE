#include<iostream>
using namespace std;
int sumOfnNumbers(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}
int main(){
    int num;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    cout<<"The sum of first "<<num<<" natural numbers is "<<sumOfnNumbers(num)<<endl;
}