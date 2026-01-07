#include<iostream>
#include<climits>
using namespace std;
int main(){
    int num[7]={23,12,1,45,100,2,32};
    int largest=INT_MIN;
    for(int i=0;i<7;i++){
        if(num[i]>largest){
            largest=num[i];
            }
        }
        cout<<"The largest number in the array is: "<<largest<<endl;
    return 0;
}
