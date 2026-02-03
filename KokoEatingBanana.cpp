class Solution {
  public:
    int kokoEat(vector<int>& arr, int k) {
        // Code here
        int max=*std::max_element(arr.begin(),arr.end());
        int start=1;
        int end=max;
        int ans=1;
        while(start<=end){
            int mid=start+(end-start)/2;
            int hours=0;
            for(int i=0;i<arr.size();i++){
                int h=arr[i]/mid;
                if(arr[i]%mid!=0){
                    h++;
                }
                hours+=h;
            }
            if(hours<=k){
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
