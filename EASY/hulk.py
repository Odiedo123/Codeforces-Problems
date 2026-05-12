def solve():
    n = int(input())
    one = "I hate that"
    two = "I love that"
    if n%2 == 0:
        y = int((n/2) - 1)
        print(f"{one} {two} "*y + "I hate that I love it" )
    else:
        y = int((n-1)/2)
        print(f"{one} {two} "*y + "I hate it")

if __name__ == "__main__":
    solve()