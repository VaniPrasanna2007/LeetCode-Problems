class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> need,mp;
		for(char c:t)
			need[c]++;
		
		int l=0,r=0,cnt=0,mn=INT_MAX,start=0;
		
		while(r<s.size()){
			mp[s[r]]++;
			if(need.count(s[r]) && mp[s[r]]<=need[s[r]])
				cnt++;
			while(cnt==t.size()){
				if(r-l+1<mn){
					mn=r-l+1;
					start=l;
				}
				mp[s[l]]--;
				
				if(need.count(s[l]) && mp[s[l]]<need[s[l]])
					cnt--;
				l++;
			}
			r++;
		}
		if(mn==INT_MAX)
			return "";
		return s.substr(start,mn);
    }
};