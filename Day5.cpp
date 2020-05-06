class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int>mp;
        int i,j,k;
        int n = s.size();
        for(i=0;i<n;i++){
            if(mp.find(s[i])==mp.end())
                mp[s[i]]=i;
            else
                mp[s[i]]=-1;
        }
        for(i=0;i<n;i++){
            if(mp[s[i]]!=-1)
                return i;
        }
        return -1;
    }
};
