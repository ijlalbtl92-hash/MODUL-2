def main():
    nilai = int(input().strip())

    if nilai >= 80:
        print("A")
    elif nilai >= 70:
        print("B")
    elif nilai >= 60:
        print("C")
    elif nilai >= 50:
        print("D")
    else:
        print("E")

if __name__ == "__main__":
    main()