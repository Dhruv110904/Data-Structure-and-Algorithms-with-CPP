#include <iostream>
using namespace std;

int main(){
    int arr[]={10,8,2,3,1,4};
    for(int i=4;i>=0;i--){
        bool swapped=0;
        for(int j=0;j<=i;j++){
            if(arr[j]>arr[j+1]){
                swapped=1;
                swap(arr[j],arr[j+1]);
            }
        }
        if(swapped==0){
            break;
        }
    }
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}