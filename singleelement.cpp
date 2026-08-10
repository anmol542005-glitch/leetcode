#include <iostream>
#include <vector>
using namespace std;
int singleelement(vector<int>arr){
    int str=0,end=arr.size()-1;
    while(str<=end){
        int mid=str+(end-str)/2;
        if(arr[mid-1]!=arr[mid] && arr[mid+1]!=arr[mid]){
            return mid;
        }
        if(mid%2==0){
            if(arr[mid-1]==arr[mid]){//left
                end=mid-1;
            }
            else
                str=mid+1;
        }
        else{
            if(arr[mid-1]==arr[mid]){
                str=mid+1;
            }
            else   
                end=mid-1;
        }
    }
    return -1;
}
