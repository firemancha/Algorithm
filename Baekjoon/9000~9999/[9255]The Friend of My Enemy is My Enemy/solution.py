def solution(rel, n, p):
    res = []

    for i in range(n):
        if rel[p][i]:
            res.append(i + 1)

    return res


if __name__ == "__main__":
    K = int(input())
    relation = []
    res = []

    for k in range(K):
        n, m = map(int, input().split())

        relation = [[False] * n for _ in range(n)]

        for i in range(m):
            a, b = map(int, input().split())
            relation[a - 1][b - 1] = True
            relation[b - 1][a - 1] = True

        p = int(input())
    
        res = solution(relation, n, p - 1)

        print(f"Data Set {k + 1}:")
        
        for r in res:
            print(r, end=" ")
        
        print("\n")