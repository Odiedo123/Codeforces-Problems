def solve():
    t = int(input())
    for _ in range(t):
        n = int(input())
        moves = 0
        if n > 2:
            num = n//3
            if n % 3 == 2:
                moves = num + 1
                print(moves)
            elif n % 3 == 1:
                moves = num - 1
                moves += 2
                print(moves)
            elif n % 3 == 0:
                moves = num
                print(moves)
        elif n == 1:
            print(2)
        elif n == 2:
            print(1)

if __name__ == "__main__":
    solve()