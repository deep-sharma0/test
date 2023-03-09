#include<bits/stdc++.h>
using namespace std;
  int first(vector<int>& nums, int target){
          int s=0,ans=-1,e= nums.size(),mid=s+(e-s)/2;
       while(s<=e){
           if(nums[mid]==target){
               mid=ans;
               e=mid-1;
           }
           else if(nums[mid]>target){
               e=mid-1;
           }
           else {
               s=mid+1;
           }
           mid=s+(e-s)/2;
       }
        return ans;
    };
     int last(vector<int>& nums, int target){
          int s=0,ans=-1,e= nums.size(),mid=s+(e-s)/2;
       while(s<=e){
           if(nums[mid]==target){
               mid=ans;
               s=mid+1;
           }
           else if(nums[mid]>target){
               e=mid-1;
           }
           else {
               s=mid+1;
           }
           mid=s+(e-s)/2;
       }
        return ans;
    };
    vector<int> searchRange(vector<int>& nums, int target) {
 nums={first(nums,target),last(nums,target)};
        return nums;
    
};
int main(){
    
}
