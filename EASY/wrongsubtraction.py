def solve():
    num,sub = map(int, input().split())
    num_lst = list(str(num))
    count = 0
    while sub > 0:
        if num_lst[-1] != "0":
            num -= 1
            num_lst = list(str(num))
            sub -= 1
        elif num_lst[-1] == "0":
            num = num//10
            num_lst = list(str(num))
            sub -= 1
    print(num)
if __name__ == "__main__":
    solve()