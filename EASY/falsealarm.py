def solve():
    t = int(input())
    for _ in range(t):
        doors, time = map(int, input().split())
        state = list(map(str, input().split()))
        count = 0
        for i in state:
            if i == "0":
                count += 1
                if count == doors:
                    print("YES")
            else:
                num = doors - state.index(i) - 1
                if num <= time:
                    print("YES")
                else:
                    print("NO")
                    
if __name__ == "__main__":
    solve()