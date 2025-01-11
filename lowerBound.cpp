#include<iostream>
using namespace std;

int lowerBound(int arr[],int size,int target){

    int low = 0, high = size-1,mid;

    while(low <= high){
        mid = (low+high)/2;

        if(arr[mid] > target) 
            high = mid-1;
        else if(arr[mid] < target)
            low = mid+1;
        else{
            if(arr[mid-1] == target)
                high = mid-1;
            else
                return mid;
        }
    }
    return low;
}

int main(){
    int arr[] = {3,4,5,6,7,8,8,8,11,22,65};
    int target = 10;
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<lowerBound(arr,size,target);
    
}