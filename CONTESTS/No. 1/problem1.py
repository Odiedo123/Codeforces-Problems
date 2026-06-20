def solve():
    t = int(input())
    for _ in range(t):
        use,div = map(int, input().split())
        print(use*div + 1)

if __name__ == "__main__":
    solve()