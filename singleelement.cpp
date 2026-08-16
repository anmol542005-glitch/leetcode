#include <iostream>
#include <vector>
using namespace std;
int single_element(vector<int>arr){
    int n=arr.size();
    int str=0,end=n-1;
    if(n==1) return arr[0];
    while(str<=end){
        int mid=str+(end-str)/2;
        if(mid==0 && arr[0] !=arr[1]) return mid;
        if(mid==n-1 && arr[n-1]!=arr[n-2]) return mid;
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
