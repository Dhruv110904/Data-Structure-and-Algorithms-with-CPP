class Solution {
  public:
    int splitArray(vector<int>& arr, int k) {
        // code here
        int start=0;
        int end=0;
        int ans=1;
        for(int i=0;i<arr.size();i++){
            end+=arr[i];
            if(start<arr[i]){
                start=arr[i];
            }
        }
        while(start<=end){
            int mid=start+(end-start)/2;
            int sum=arr[0];
            int count=1;
            for(int i=1;i<arr.size();i++){
                sum+=arr[i];
                if(sum>mid){
                    count++;
                    sum=arr[i];
                }
            }
            if(count<=k){
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }
};
