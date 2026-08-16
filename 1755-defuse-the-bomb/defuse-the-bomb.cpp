class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n=code.size();
        vector<int>v(n,0);
        int l=0,r=0;
        if(k>0){
            while(l<code.size()){
                r=l+1;
                int cnt=0,sum=0;
            while(cnt!=k){
                if(r == n) r = 0;
                sum+=code[r];
                cnt++;
                r++;
            }
            v[l]=sum;
            l++;
            }
        }
        else if(k<0){
             while(l<code.size()){
                r=l-1;
                int cnt=0,sum=0;
            while(cnt!=-k){
                if(r<0) r = n-1;
                sum+=code[r];
                cnt++;
                r--;
            }
            v[l]=sum;
            l++;
            }
        }
           
        
         return v;
    }
};