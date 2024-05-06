class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {

        // up down left right
        vector<int>row_dir={-1,1,0,0};
        vector<int>col_dir={0,0,-1,1};
        int rows = grid.size();
        int cols = grid[0].size();
        int freshOrange=0 ;
        int minutes =0; 

        queue<pair<int,int>>q;

        for(int i=0 ; i<rows;i++)
        {
            for(int j=0 ; j<cols;++j)
            {
                if(grid[i][j]==1) ++freshOrange;
                else if(grid[i][j]==2)
                {
                    q.push({i,j});
                }

            }
        }

        while(!q.empty())
        {
            int Qsize=q.size();
            while(Qsize--)
            {
                auto [r,c] = q.front();q.pop();

                for(int i=0 ; i<4;++i)
                {
                    int NewRow = r+row_dir[i] ;
                    int NewCol = c+col_dir[i] ;

                    if(NewRow>=0 && NewRow<rows && NewCol>=0 && NewCol<cols &&grid[NewRow][NewCol]==1 )
                    {
                        --freshOrange;
                        grid[NewRow][NewCol] =2;
                        q.push({NewRow,NewCol});
                    }
                }
            }

            if (!q.empty()) {
            minutes++;
            }
             
        }

        return (freshOrange == 0) ? minutes : -1;
    }
};
