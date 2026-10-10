import sys

def main():
    data = list(map(int, sys.stdin.read().split()))
    if len(data) == 2:
        a, b = data
        if a > b:
            a, b = b, a
        print(f"{a} {b}")
    elif len(data) >= 3:
        a, b, c = data[:3]
        if a > b:
            a, b = b, a
        if a > c:
            a, c = c, a
        if b > c:
            b, c = b, c
        print(f"{a} {b} {c}")

if __name__ == "__main__":
    main()
