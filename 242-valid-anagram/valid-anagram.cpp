class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
           bool used[26] = {false};

        for(int i=0;i<s.length();i++){
           int cnt1=0,cnt2=0;
               if (used[s[i] - 'a']) {
                continue; 
               } 
            used[s[i] - 'a'] = true;
            for(int j=0;j<s.length();j++){
            if(s[j]==s[i]){
                cnt1++;
            }
            if(t[j]==s[i]){
                cnt2++;
            }
            }
            if(cnt1!=cnt2){
                return false;
            }
        }
        return true;
    }
};