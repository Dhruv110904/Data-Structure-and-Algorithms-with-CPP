#include <iostream>
using namespace std;

int main() {
    int arr[]={10,8,2,3,1,4};
    for(int i=1;i<6;i++){
        int index=i;
        for(int j=i;j>0;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
            else{
                break;
            }
        }
    }
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}