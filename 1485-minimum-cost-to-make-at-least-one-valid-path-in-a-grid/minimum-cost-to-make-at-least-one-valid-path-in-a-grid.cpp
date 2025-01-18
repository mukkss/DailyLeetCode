#include <vector>
#include <deque>
#include <unordered_map>
#include <tuple>
using namespace std;

class Solution {
public:
    int minCost(vector<vector<int>>& grid) {
        // Define the directions
        vector<pair<int, int>> direction = {
            {0, 1},   // Right
            {0, -1},  // Left
            {1, 0},   // Down
            {-1, 0}   // Up
        };

        int ROWS = grid.size();
        int COLS = grid[0].size();

        // Use a deque to perform 0-1 BFS
        deque<tuple<int, int, int>> q; // {row, col, cost}
        q.push_back({0, 0, 0});

        // Store the minimum cost for each cell
        vector<vector<int>> min_cost(ROWS, vector<int>(COLS, INT_MAX));
        min_cost[0][0] = 0;

        while (!q.empty()) {
            auto [r, c, cost] = q.front();
            q.pop_front();

            // If we reach the bottom-right corner, return the cost
            if (r == ROWS - 1 && c == COLS - 1) {
                return cost;
            }

            // Traverse in all four possible directions
            for (int d = 0; d < 4; ++d) {
                int dr = direction[d].first, dc = direction[d].second;
                int nr = r + dr, nc = c + dc;
                int n_cost = (d + 1 == grid[r][c]) ? cost : cost + 1;

                // Check boundaries and if the new cost is smaller
                if (nr >= 0 && nc >= 0 && nr < ROWS && nc < COLS && n_cost < min_cost[nr][nc]) {
                    min_cost[nr][nc] = n_cost;

                    if (d + 1 == grid[r][c]) {
                        q.push_front({nr, nc, n_cost}); // Prioritize if the direction matches
                    } else {
                        q.push_back({nr, nc, n_cost});
                    }
                }
            }
        }

        return -1; // If no valid path is found (though this shouldn't happen)
    }
};
