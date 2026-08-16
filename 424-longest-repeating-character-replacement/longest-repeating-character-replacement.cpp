class Solution {
public:
    int characterReplacement(string s, int k) {
          int l=0,r=0,mx=0,ans=0;
        unordered_map<char,int> mp;
        while(r<s.size()){
            mp[s[r]]++;
            mx=max(mx,mp[s[r]]);
            while(r-l+1-mx>k){
                mp[s[l]]--;
                l++;
            }
            ans=max(ans,r-l+1);
            r++;
        }
        return ans;
    }
};