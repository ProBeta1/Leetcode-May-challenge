class Solution {
public:
    int newC,origC,n,m;
    vector<vector<int>>v;
    map<pair<int,int>,int>vis;
    bool checkIt(int x,int y){
        if(x>=0 && x<n && y>=0 && y<m && vis[{x,y}]==false && v[x][y] == origC)
            return true;
        return false;
    }
    
    void colorIt(int x,int y){
        
        queue<pair<int,int>>q;
        q.push({x,y});
        int dx[] = {1,-1,0,0};
        int dy[] = {0,0,1,-1};
        while(!q.empty()){
            pair<int,int> tmp = q.front();
            q.pop();
            if(vis[tmp])
                continue;
            x = tmp.first, y = tmp.second;
            v[x][y] = newC;
            vis[tmp] = true;
            for(int i=0;i<4;i++){
                int nx = x+dx[i];
                int ny = y+dy[i];
                if(checkIt(nx,ny)){
                    q.push({nx,ny});
                }
            }
        }
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        n = image.size();
        m = image[0].size();
        v = image;
        origC = image[sr][sc];
        newC = newColor;
        colorIt(sr,sc);
        return v;
    }
};
