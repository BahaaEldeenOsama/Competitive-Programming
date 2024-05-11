class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {

        int moves = 0;
        int rows = grid.size();
        int cols = grid[0].size();

        // up down left right
        vector<int>row_dir = {-1,1,0,0};
        vector<int>col_dir = {0,0,-1,1};

        
        vector<vector<bool>>vis(rows,vector<bool>(cols,false));

        for(int i=0 ; i<rows ; i++)
        {
            for(int j=0 ; j<cols ;++j)
            {
                if( (i==0 || j==0 || i==rows-1 || j==cols-1 ) && grid[i][j]==1 )
                {
                    queue<pair<int,int>>q;
                    q.push({i,j});
                    vis[i][j]=true;
                    while(!q.empty())
                    {
                        int Qsize = q.size();
                        while(Qsize--)
                        {
                            auto [r,c] = q.front();
                            q.pop();
                            for(int i= 0 ;i<4 ;++i)
                            {
                                int newRow = r+row_dir[i];
                                int newCol = c+col_dir[i];

                                if(newRow>=0 && newRow<rows && newCol>=0 && newCol<cols && grid[newRow][newCol]==1 && vis[newRow][newCol]==false)
                                {

                                    q.push({newRow,newCol});
                                    vis[newRow][newCol] = true;
                                }
                            }
                        }
                    }

                }

            }
        }

        for(int i=0 ; i<rows ;++i)
        {
            for(int j=0 ; j<cols ;++j)
            {
                if(grid[i][j] && !vis[i][j])  ++moves;
            }
        }

        return moves;
    }
};
