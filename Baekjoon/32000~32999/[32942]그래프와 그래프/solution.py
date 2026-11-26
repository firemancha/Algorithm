import sys

input = sys.stdin.readline

res = []

if __name__ == "__main__":
    a, b, c = map(int, input().split())

    for i in range(1, 11):
        sol = []

        for j in range(1, 11):
            if(a * i + b * j == c):
                sol.append(j)
        
        if len(sol) == 0:
            sol.append(0)
        
        res.append(sol)
    
    for sol in res:
        print(*sol)