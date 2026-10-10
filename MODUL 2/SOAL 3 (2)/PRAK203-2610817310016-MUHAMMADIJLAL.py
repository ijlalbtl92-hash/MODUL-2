import sys

def main():
    data = sys.stdin.read().split()
    if data:
        a, b, i, j, x, y = map(float, data[:6])
        hasil = ((a - b) * i) / j - (x + y)
        print(f"{hasil:.3f}")

if __name__ == "__main__":
    main()