class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int n=position.size();
        long start=0;
        long end=position[n-1]-position[0];
        int ans=0;
        while(start<=end){
            long mid=start+(end-start)/2;
            long posi=position[0];
            int count=1;
            for(int i=1;i<n;i++){
                if(posi+mid<=position[i]){
                    count++;
                    posi=position[i];
                }
            }
            if(count>=m){
                ans=mid;
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return ans;
    }
};
