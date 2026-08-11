class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>m;
        int i=0,j=0,mx=0;
        while(j<s.size()){
            m[s[j]]++;
            while(m[s[j]]>1){
                m[s[i]]--;
                i++;
            }
            mx=max(mx,j-i+1);
            j++;
        }
        return mx;
    }
};