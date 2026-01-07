#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n=5;
    int arr[5]={2, -1, 3, 4, -5};
    
    int maxSum=INT_MIN;
    for(int st=0; st<5; st++){
        int currSum=0;
        for(int end=st;end<4;end++){
            currSum+=arr[end];
            if(currSum>maxSum){
                maxSum=max(currSum,maxSum);
            }
        }
    }
    cout<<"Maximum SubArray Sum is : "<<maxSum<<endl;
}