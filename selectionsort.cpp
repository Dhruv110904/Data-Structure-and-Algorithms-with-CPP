#include <iostream>
using namespace std;

int main() {
    int arr[]={10,8,2,3,1,4};
    int index;
    for(int i=0;i<5;i++){
        index=i;
        for(int j=i+1;j<6;j++){
            if(arr[j]<arr[index]){
                index=j;
            }
        }
        int x=arr[i];
        arr[i]=arr[index];
        arr[index]=x;
    }
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}