def solve():
    t = int(input())
    for _ in range(t):
        n, x = map(int, input().split())
        doors = list(map(str, input().split()))
        position = 1
        for i in doors:
            if i == "0":
                position += 1
                pass
            else:
                if x >= n - position:
                    print("YES")
                    break
                else:
                    print("NO")
                    break

if __name__ == "__main__":
    solve()