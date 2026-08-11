class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int cnt=0,l=0,mx=0;
        for(int r=0;r<nums.size();r++){
            if(nums[r]==0){
                cnt++;
            }

            while(cnt>k){
                if(nums[l]==0){
                    cnt--;
                }
                l++;
            }
            mx=max(mx,r-l+1);
        }
    
        return mx;
    }
};