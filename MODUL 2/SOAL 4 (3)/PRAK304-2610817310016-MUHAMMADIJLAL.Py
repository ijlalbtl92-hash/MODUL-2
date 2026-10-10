def main():
    a = int(input().strip())

    if a < 0 or a >= 100:
        print("Anda Menginput Melebihi Limit Bilangan")
    elif a == 0:
        print("Nol")
    elif 1 <= a <= 9:
        print("Satuan")
    elif 11 <= a <= 19:
        print("Belasan")
    else: 
        print("Puluhan")

if __name__ == "__main__":
    main()