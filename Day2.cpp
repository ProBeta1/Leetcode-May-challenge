class Solution {
public:
    int numJewelsInStones(string j ,string s) {
        int n = j.size(),m=s.size();
        int i,c=0;
        map<char,bool>mp;
        for(i=0;i<n;i++){
            mp[j[i]]=true;
        }
        for(i=0;i<m;i++){
            if(mp[s[i]])
                c++;
        }
        return c;
    }
};
