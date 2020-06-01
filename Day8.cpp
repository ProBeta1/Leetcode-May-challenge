class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {
        double slope=0,nslope=0;
        int px,py;
        for(int i=0;i<c.size();i++){
            int x= c[i][0] , y = c[i][1];
            if(i==1){
                if((x-px) ==0)
                    slope = 1e5;
                else
                    slope = double(y-py)/double(x-px);
            }
            else if(i>1){
                if((x-px) == 0)
                    nslope = 1e5;
                else
                    nslope = double(y-py)/double(x-px);
                if((nslope!=slope))
                    return false;
            }
            cout<<slope<<" "<<nslope<<endl;
            cout<<x<<" "<<y<<"   "<<px<<" "<<py<<endl;
            px=x,py=y;
        }
        return true;
    }
};
