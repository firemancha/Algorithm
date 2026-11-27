import sys
from collections import deque

input = sys.stdin.readline
board = []
visited = []
dirs = [[0,1],[1,0]]
res = False
N = 0

def bfs(sx, sy):
    global res

    q = deque([(sx,sy)])
    visited[sy][sx] = True

    while q:
        x, y = q.popleft()

        if board[y][x] == -1:
            res = True
            break
        
        for i in range(len(dirs)):
            nx = x + board[y][x] * dirs[i][0]
            ny = y + board[y][x] * dirs[i][1]

            if not (0 <= nx < N and 0 <= ny < N):
                continue
            
            if visited[ny][nx]:
                continue
            
            visited[ny][nx] = True
            q.append((nx,ny))




if __name__ == "__main__":
    N = int(input())

    visited = [[False] * N for _ in range(N)]

    for i in range(N):
        row = list(map(int, input().split()))
        board.append(row)
    
    bfs(0,0)

    print("HaruHaru" if res else "Hing")
