
#include <iostream>
#include <vector>
using namespace std;


    int search(vector<int>& nums, int target) {
       int str=0,end=nums.size()-1;
       while(str<=end){
            int mid=str+(end-str)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[str]<=nums[mid]){//left sorted
                if(nums[str]<=target && target<=nums[mid]){
                    end=mid-1;
                }
                else
                    str=mid+1;
            }
            else{//right sorted 
                if(nums[mid]<=target && target<=nums[end])
                    str=mid+1;
                else{
                    end=mid-1;
                }
            }
       }
       return -1;
    }
