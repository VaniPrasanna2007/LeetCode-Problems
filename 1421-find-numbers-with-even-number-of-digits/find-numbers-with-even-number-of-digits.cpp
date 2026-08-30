class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            int d=0;
            int temp=nums[i];
            while(temp!=0){
                d++;
                temp/=10;
            }
            if(d%2==0){
                cnt++;
            }
        }
        return cnt;
    }
};