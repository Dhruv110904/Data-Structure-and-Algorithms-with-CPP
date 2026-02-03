#include <iostream>
using namespace std;

int main() {
    int arr[]={4,7,12,14,16,20};
    int key=16;
    int start=0;
    int end=5;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key){
            cout<<"index: "<<mid;
            break;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
    }

}
