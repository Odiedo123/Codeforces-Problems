def solve():
    n = int(input())
    crimes = list(map(int, input().split()))
    police = 0
    untreated = 0
    for i in crimes:
        if i >= 0:
            police += i
        else:
            if police > 0:
                police -= 1
            else:
                untreated += 1
    print(untreated)

if __name__ == "__main__":
    solve()