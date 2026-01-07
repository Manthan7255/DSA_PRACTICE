#include<iostream>
#include<vector>
using namespace std;
int majorityElement(vector<int>& nums) {
    for(int val : nums){
        int count=0;
        for(int ele : nums){
            if(ele==val){
                count++;
            }
        }
        if(count>nums.size()/2){
            return val;
        }
    }
    return -1; 
}
int main(){
    vector<int>nums={3,2,3};
    cout<<"Majority Element is: "<<majorityElement(nums)<<endl;
}