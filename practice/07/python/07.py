#з7 Площадь треугольника
import math
print("Выберите способ ввода параметров треугольника:\n1. Длины сторон\n2. Координаты вершин")
while True:
    try:
        method = int(input())
    except ValueError:
        print("Пожалуйста, введите корректные данные:")
        continue
    if method == 1:
        a = float(input("Введите длину стороны а: "))
        b = float(input("Введите длину стороны b: "))
        c = float(input("Введите длину стороны c: "))
        if ((a < (b + c)) and (b < (a + c)) and (c < (b + a))):
            p = (a + b + c) / 2
            S = math.sqrt(p * (p - a) * (p - b) * (p - c))
            print("S = ", S)
            break
        else:
            print("Существование такого треугольника невозможно.")
            break
    elif method == 2:
        xa, ya = map(float,input("Введите координаты веришны А (через пробел): ").split( ))
        xb, yb = map(float,input("Введите координаты веришны B (через пробел): ").split( ))
        xc, yc = map(float,input("Введите координаты веришны C (через пробел): ").split( ))
        a = math.sqrt((pow((xb - xa), 2) + (pow((yb - ya), 2))))
        b = math.sqrt((pow((xc - xb), 2) + (pow((yc - yb), 2))))
        c = math.sqrt((pow((xc - xa), 2) + (pow((yc - ya), 2))))
        if ((a < (b + c)) and (b < (a + c)) and (c < (b + a))):
            p = (a + b + c) / 2;
            S = math.sqrt(p * (p - a) * (p - b) * (p - c));
            print("S = ", S)
            break
        else:
            print("Существование такого треугольника невозможно.")
            break
    elif (method != 1 and method != 2):
        print("Пожалуйста, введите корректные данные:")
