class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        int n = trust.size();
        if(n==0)
            return 1;
        map<int,int>mp,cp;
        for(int i=0;i<n;i++){
            int x = trust[i][1];
            int y = trust[i][0];
            cp[y]++;
            mp[x]++;
        }
        bool flag=false;
        int ans=-1;
        for(int i=0;i<n;i++){
            int x = trust[i][1];
            if(mp[x]==(N-1) && cp[x]==0)
            {
                if(flag==false)
                ans = x;
                else
                    return -1;
            }
        }
        return ans;
    }
};
