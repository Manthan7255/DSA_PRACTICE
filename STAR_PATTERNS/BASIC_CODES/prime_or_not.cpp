#include<iostream>
using namespace std;
int main(){
    int num;
    bool isPrime=true;
    cout<<"enter number: ";
    cin>>num;
    for(int i=2;i<=num/2;i++){
          if(num%i==0){
        isPrime=false;
    }
    
    }
    if(isPrime=true){
        cout<<"prime number"<<endl;
    }
    else{
        cout<<"not a prime number"<<endl;
    }
} 
