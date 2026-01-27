#include <iostream>
using namespace std;

int main()
{
    int arr[11]={0,0,1,0,1,0,0,0,1,1,1};
    int n=11;
    int count0=0;
    int count1=0;
    int res[n];
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count0++;
        }
        else{
            count1++;
        }
        res[i]=count0-count1;
    }
    int countres=0;
    int start=0;
    int end=0;
    for(int i=0;i<n;i++){
        int index=-1;
        int x=res[i];
        for(int j=i+1;j<n;j++){
            if(res[j]==x){
              index=j;
            }
            if((index-i)>countres){
                countres=index-i;
                start=i+1;
                end=index;
            }
        }
        
    }
    cout<<"Length"<<countres<<endl;
    for(int i=start;i<=end;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
