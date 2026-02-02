class Solution {
  public:
    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
        sort(stalls.begin(),stalls.end());
        int n=stalls.size();
        int start=0;
        int end=stalls[n-1]-stalls[0];
        int ans=1;
        while(start<=end){
            int mid=start+(end-start)/2;
            int count=1;
            int position=stalls[0];
            for(int i=1;i<n;i++){
                if(position+mid<=stalls[i]){
                    count++;
                    position=stalls[i];
                }
            }
            if(count<k){
                end=mid-1;
            }
            else{
                start=mid+1;
                ans=mid;
            }
        }
        return ans;
    }
};
