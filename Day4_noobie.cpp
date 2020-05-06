class Solution {
public:
    int findComplement(int num) {
        int n = num;
        int i,j;
        string s="";
        while(n){
            int x =n%2;
            s += (x==0)?'0':'1';
            n/=2;
        }
        reverse(s.begin(),s.end());
        cout<<s<<endl;
        string p ="";
        for(i=0;i<s.size();i++){
            p+= (s[i]=='0')?'1':'0';
        }
        cout<<p<<endl;
        int ans = 0,c=0;
        for(i=p.size()-1;i>=0;i--){
            ans += pow(2,c++)*(p[i]-'0');
        }
        
        return ans;
    }
};
