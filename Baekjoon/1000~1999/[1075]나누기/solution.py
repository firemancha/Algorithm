import sys

input = sys.stdin.readline

if __name__ == "__main__":
    N = int(input())
    F = int(input())

    res = 0

    for i in range(100):
        new_n = N // 100 * 100 + i

        if new_n % F == 0:
            res = i
            break
    
    print(format(res, '02'))