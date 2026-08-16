class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> ans;
        int len=words[0].size();
        int total=words.size();
        unordered_map<string,int> need;
        for(string x:words) need[x]++;
        
        for(int start=0;start<len;start++){
            int l=start,r=start,cnt=0;
            unordered_map<string,int> have;
            
            while(r+len<=s.size()){
                string x=s.substr(r,len);
                r+=len;
                
                if(need.find(x)==need.end()){
                    have.clear();
                    cnt=0;
                    l=r;
                }
                else{
                    have[x]++;
                    cnt++;
                    
                    while(have[x]>need[x]){
                        string y=s.substr(l,len);
                        have[y]--;
                        l+=len;
                        cnt--;
                    }
                    if(cnt==total)
                        ans.push_back(l);
                }
            }
        }
        return ans;
    }
};