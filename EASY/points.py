def solve():
    t = int(input())
    for _ in range(t):
        n = int(input())
        set_points = list(map(int, input().split()))
        set_points.sort()
        if len(set_points) <= 1:
            print("YES")
        elif len(set_points) == 2:
            if set_points[1] - set_points[0] > 1:
                print("YES")
            else:
                print("NO")
        else:
            print("NO")

if __name__ == "__main__":
    solve()