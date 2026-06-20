def solve():
    Yakko, Wakko = map(int, input().split())
    maximum = max(Yakko, Wakko)
    numerator = 6 - maximum + 1
    denominator = 6
    for i in range(1,numerator + 1):
        if numerator % i == 0 and denominator % i == 0:
            numerator //= i
            denominator //= i
    print(f"{numerator}/{denominator}")

if __name__ == "__main__":
    solve()