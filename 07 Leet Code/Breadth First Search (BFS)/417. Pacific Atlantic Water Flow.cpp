class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {

        // up down left right
        vector<int> row_dir = {-1, 1, 0, 0};
        vector<int> col_dir = {0, 0, -1, 1};

        int ans = 0;
        int rows = grid.size();
        int cols = grid[0].size();

        vector<vector<int>> vis(rows, vector<int>(cols, 0));

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (grid[i][j] == 1 && vis[i][j] == 0) {
                    queue<pair<int, int>> q;
                    q.push({i, j});
                    vis[i][j] = 1;

                    int area = 0;
                    while (!q.empty()) {
                        int Qsize = q.size();
                        while (Qsize--) {
                            auto [r, c] = q.front();
                            q.pop();
                            ++area;
                            for (int i = 0; i < 4; ++i) {
                                int newRow = r + row_dir[i];
                                int newCol = c + col_dir[i];
                                if (newRow >= 0 && newRow < rows && newCol >= 0 && newCol < cols && vis[newRow][newCol] == 0 && grid[newRow][newCol] == 1) {
                                    q.push({newRow, newCol});
                                    vis[newRow][newCol] = 1;
                                }
                            }
                        }
                    }

                    cout << area << endl;
                    ans = max(ans, area);
                }
            }
        }

        return ans;
    }
};
