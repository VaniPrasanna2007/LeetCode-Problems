class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int t) {
        int l=0,r=0,cnt=0,sum=0;
        while(r<arr.size()){
            sum+=arr[r];
            while(r-l+1>k){
                sum-=arr[l];
                l++;
            }
            if(r-l+1==k){
                if((sum/k)>=t){
                    cnt++;
                }
            }
            r++;
        }
        return cnt;
    }
};