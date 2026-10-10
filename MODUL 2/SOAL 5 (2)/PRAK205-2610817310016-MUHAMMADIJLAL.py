import math
import sys

data = sys.stdin.read().split()

if data:
    A = float(data[0])  
    B = float(data[1])  

    alas = math.sqrt(B**2 - A**2)
    tinggi = A
    keliling = alas + tinggi + B
    luas = 0.5 * alas * tinggi

    print(f"Alas = {int(alas)} cm")
    print(f"Tinggi = {int(tinggi)} cm")
    print(f"Keliling = {int(keliling)} cm")
    print(f"Luas = {int(luas)} cm^2")