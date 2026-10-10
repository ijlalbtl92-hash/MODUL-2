def main():
    inputs = []
    while len(inputs) < 2:
        inputs.extend(input().split())

    r, h = map(float, inputs[:2])

    pi = 22 / 7

    volume = pi * (r ** 2) * h
    luas = 2 * pi * r * (r + h)
    keliling = 2 * pi * r

    print(f"Volume = {volume:.2f}")
    print(f"Luas = {luas:.2f}")
    print(f"Keliling = {keliling:.2f}")

if __name__ == "__main__":
    main()