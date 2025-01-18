import java.util.*;

class Solution {
    public int minCost(int[][] grid) {
        // Define the directions (Right, Left, Down, Up)
        int[][] directions = {
            {0, 1},   // Right
            {0, -1},  // Left
            {1, 0},   // Down
            {-1, 0}   // Up
        };

        int rows = grid.length;
        int cols = grid[0].length;

        // Use a deque for 0-1 BFS
        Deque<int[]> deque = new ArrayDeque<>(); // {row, col, cost}
        deque.offer(new int[]{0, 0, 0});

        // Array to track the minimum cost for each cell
        int[][] minCost = new int[rows][cols];
        for (int[] row : minCost) {
            Arrays.fill(row, Integer.MAX_VALUE);
        }
        minCost[0][0] = 0;

        while (!deque.isEmpty()) {
            int[] current = deque.poll();
            int r = current[0], c = current[1], cost = current[2];

            // If we reach the bottom-right corner, return the cost
            if (r == rows - 1 && c == cols - 1) {
                return cost;
            }

            // Traverse in all four possible directions
            for (int d = 0; d < 4; d++) {
                int nr = r + directions[d][0];
                int nc = c + directions[d][1];
                int nCost = (d + 1 == grid[r][c]) ? cost : cost + 1;

                // Check boundaries and if the new cost is smaller
                if (nr >= 0 && nc >= 0 && nr < rows && nc < cols && nCost < minCost[nr][nc]) {
                    minCost[nr][nc] = nCost;

                    if (d + 1 == grid[r][c]) {
                        deque.offerFirst(new int[]{nr, nc, nCost}); // Prioritize matching direction
                    } else {
                        deque.offerLast(new int[]{nr, nc, nCost});
                    }
                }
            }
        }

        return -1; // If no valid path is found (though this shouldn't happen)
    }
}
