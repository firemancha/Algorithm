def bfs(cx, cy):
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]
    queue = [(cx, cy)]
    visited[cx][cy] = True

    while queue:
        x, y = queue.pop(0)
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < R and 0 <= ny < C and pasture[nx][ny] and not visited[nx][ny]:
                queue.append((nx, ny))
                visited[nx][ny] = True

if __name__ == "__main__":
    R, C = map(int, input().split())
    pasture = [[True if c == '#' else False for c in input()] for _ in range(R)]
    visited = [[False] * C for _ in range(R)]
    res = 0

    for i in range(R):
        for j in range(C):
            if pasture[i][j] and not visited[i][j]:
                bfs(i, j)
                res += 1

    print(res)