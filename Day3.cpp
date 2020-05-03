class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n = magazine.size(),m=ransomNote.size();
        int i,j,k;
        map<char,int>mp;
        for(i=0;i<n;i++){
            mp[magazine[i]]++;
        }
        
        for(i=0;i<m;i++){
            if(mp[ransomNote[i]]>0)
                mp[ransomNote[i]]--;
            else
                return false;
        }
        
        return true;
    }
};
