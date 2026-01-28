#include <iostream>
using namespace std;

int main()
{
    int arr[10]={1,4,6,9,14,17,21,24,28,32};
    int key=17;
    int start=0;
    int end=10;
    int res=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]<=key){
            start=mid+1;
        }
        else{
            end=mid-1;
            res=arr[mid];
        }
    }
    cout<<res;

    return 0;
}
