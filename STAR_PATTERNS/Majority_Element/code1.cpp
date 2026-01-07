#include<iostream>
#include<vector>
using namespace std;
vector<int> PairSum(vector<int> &arr, int targetSum){
    vector<int>ans;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j]==targetSum){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}
int main(){
    vector<int>arr={2,4,5,7,8,9};
    int targetSum=12;
    vector<int>ans=PairSum(arr,targetSum);
    if(ans.size()==0){
        cout<<"No such pair found"<<endl;
    }else{
        cout<<"Pair found at indices: "<<ans[0]<<" and "<<ans[1]<<endl;
    }
}