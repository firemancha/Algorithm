import sys
from collections import deque

input = sys.stdin.readline

floor = []
visited = []
n, m = [0, 0]

def solution():
    res = 0

    for i in range(n):
        for j in range(m):
            if visited[i][j]:
                continue

            bfs(j, i)
            res += 1
    
    print(res)
    


def bfs(sx, sy):
    q = deque([(sx, sy)])
    visited[sy][sx] = True

    while q:
        x, y = q.popleft()

        nx = x + 1 if floor[y][x] else x
        ny = y + 1 if not floor[y][x] else y

        if not (0 <= nx < m and 0 <= ny < n):
            continue
        
        if visited[ny][nx] or floor[ny][nx] != floor[y][x]:
            continue

        visited[ny][nx] = True
        q.append((nx,ny))

if __name__ == "__main__":
    n, m = map(int, input().split())

    floor = [[False] * m for _ in range(n)]
    visited = [[False] * m for _ in range(n)]

    for i in range(n):
        row = input()

        for j in range(m):
            floor[i][j] = row[j] == '-'
    
    solution()

