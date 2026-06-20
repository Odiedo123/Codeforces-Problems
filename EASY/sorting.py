def solve():
    t = int(input())
    for _ in range(t):
        list_ = list(map(int, input().split()))
        list_.sort()
        print(list_[0], list_[1])
        

if __name__ == "__main__":
    solve()