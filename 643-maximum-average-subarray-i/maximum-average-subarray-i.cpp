class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int l=0,r=0;
        double sum=0,mx=INT_MIN;
        while(r<nums.size()){
            sum+=nums[r];
            while(r-l+1>k){
                sum-=nums[l];
                l++;
            }
            if(r-l+1==k){
                if((sum/k)>=mx){
                    mx=sum/k;
                }
            }
            r++;
        }
        return mx;
    }
};