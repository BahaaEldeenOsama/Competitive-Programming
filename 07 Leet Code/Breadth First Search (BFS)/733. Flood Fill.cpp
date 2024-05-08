class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {

        if (image.empty()) return image;

        /// up down left right
        vector<int>direction_row ={-1,1,0,0};
        vector<int>direction_col ={0,0,-1,1};

        int rows = image.size();
        int cols = image[0].size();
        int sr_scImage = image[sr][sc];

        if (color == sr_scImage ) return image;

        queue<pair<int,int>>q;
        q.push({sr,sc});

        while(!q.empty())
        {
    
            auto[r,c] = q.front();q.pop();
            image[r][c] = color;

            for(int i=0 ;i<4 ; i++)
            {
                int newRow = r + direction_row[i];
                int newCol = c + direction_col[i];

                if(newRow >=0 && newRow<rows && newCol>=0 && newCol<cols && image[newRow][newCol] == sr_scImage  )
                {
                    q.push({newRow,newCol});
                }
            }
        }

        return image ;   
    }
};
