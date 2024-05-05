class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {

        int steps=0;
        int rows = maze.size();
        int cols = maze[0].size();
        // UP Down Left Right
        vector<int>drow = {-1,1,0,0};
        vector<int>dcol = {0,0,-1,1};

        vector<vector<bool>>vis(rows,vector<bool>(cols,false));
        vis[entrance[0]][entrance[1]] = true ;   
        queue<pair<int,int>>q;
        q.push({entrance[0],entrance[1]});
      

        while(!q.empty())
        {   
            int Qsize = q.size();
            for(int i=0 ; i<Qsize;++i)
            {
                auto [r,c] = q.front();
                q.pop();

                if ((r != entrance[0] || c != entrance[1]) && (r == 0 || r == rows - 1 || c == 0 || c == cols - 1)) {
                     return steps;
                }

                for(int j = 0 ; j<4 ; ++j)
                {
                    int newRow = drow[j] + r;
                    int newCol = dcol[j] + c;

                    if(newRow>=0 && newRow<rows && newCol>= 0 && newCol<cols && maze[newRow][newCol] == '.' && !vis[newRow][newCol])
                    {
                        q.push({newRow,newCol});
                        vis[newRow][newCol] = true;
                    }
                }
            }

            ++steps;
        }
        return -1;
    }
};
