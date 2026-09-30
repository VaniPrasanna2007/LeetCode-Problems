class Solution {
public:
    bool isvowel(char c){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
            return true;
        }
        return false;
    }
    int maxVowels(string s, int k) {
        int l=0,r=0,vc=0,mx=0;
        while(r<s.size()){
            if(isvowel(s[r])){
                vc++;
            }
            if(r-l+1>k){
                if(isvowel(s[l])){
                    vc--;
                }
               l++;
            }
            if(r-l+1==k){
                mx=max(mx,vc);
            }
            r++;
        }
        return mx;
    }
};