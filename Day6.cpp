//This week was all about map :(
class Solution {
public:
    int majorityElement(vector<int>& a) {
        int n = a.size();
        int ans = 0 , mx = 0;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[a[i]]++;
            if(mp[a[i]]>mx){
                mx = mp[a[i]];
                ans = a[i];
            }
        }
        return ans;
    }
};
