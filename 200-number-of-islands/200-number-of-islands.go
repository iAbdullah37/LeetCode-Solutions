func dfs (i int, j int, grid[][]byte) {
    if i < 0 || j < 0 || i >= len(grid) || j >= len(grid[0]) || grid[i][j] == '0' {
        return
    }
    grid[i][j] = '0'
    dfs(i, j + 1, grid)
    dfs(i + 1, j, grid)
    dfs(i, j - 1, grid)
    dfs(i - 1, j, grid)
}

func numIslands(grid [][]byte) int {
    var ans int = 0
    for i := 0; i < len(grid); i++ {
        for j := 0; j < len(grid[0]); j++ {
            if (grid[i][j] == '1') {
                ans++
                dfs(i, j, grid)
            }
        }
    }
    return ans
}