class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        long prefix=0;
        long Max=INT_MIN;
        for(int i=0;i<arr.size();i++){
            prefix+=arr[i];
            Max=max(prefix,Max);
            if(prefix<0){
                prefix=0;
            }
        }
        return Max;
    }
};
