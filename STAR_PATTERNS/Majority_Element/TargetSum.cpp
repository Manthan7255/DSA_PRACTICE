#include<iostream>
#include<vector>
using namespace std;

vector<int> PairSum(vector<int> &arr, int targetSum){
    vector<int>ans;
    int n=arr.size();

    int i=0,j=n-1;
    while(i<j){
        int PairSum=arr[i]+arr[j];
        if(PairSum>targetSum){
           j--;
           }else if(PairSum<targetSum){
               i++;
              }else{
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
    }
    return ans;
}
int main(){
    vector<int>arr={2,4,5,7,8,9};
    int targetSum=34;
    vector<int>ans=PairSum(arr,targetSum);
    if(ans.size()==0){
        cout<<"No such pair found"<<endl;
    }else{
        cout<<"Pair found at indices: "<<ans[0]<<" and "<<ans[1]<<endl;
    }
}