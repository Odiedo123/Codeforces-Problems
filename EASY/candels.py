def solve():
    t = int(input())
    for _ in range(t):
        n = int(input())
        weight = list(map(int, input().split()))
        count_1 = weight.count(1)
        count_2 = weight.count(2)
        if count_2 % 2 == 0 and count_1 % 2 == 0:
            print("YES")
        elif count_1 %2 == 1 and count_2 %2 == 0:
            print("YES")
        elif count_1 %2 == 0 and count_2 %2 == 1:
            print("YES")
        else:
            print("NO")

if __name__ == "__main__":
    solve()