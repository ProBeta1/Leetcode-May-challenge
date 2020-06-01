class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.size();
        int i,j;
        string p="";
        for(char ch : num){
            
            while(!empty(p) && k>0 && p.back()>ch){
                k--;
                p.pop_back();
            }
            
            if(!empty(p) || ch!='0')
                p.push_back(ch);
            
        }
        
        while(k>0 && !empty(p))
            k--,p.pop_back();
        
        if(empty(p))
            p="0";
        return p;
    }
};
