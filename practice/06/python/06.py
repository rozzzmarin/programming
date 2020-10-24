#з6. Корни уравнения
import math
while True:
    try:
        a = float(input("a = "))
        b = float(input("b = "))
        c = float(input("c = "))
    except ValueError:
        print("Пожалуйста, введите корректные данные:")
        continue
    else:
        break
if a == 0:
    if b != 0 and c != 0:
        x1 = -(c/b)
        print("x = ", x1)
    elif b != 0 and c == 0:
        x1 = (0/b)
        print("x = ", x1)
    elif b == 0 and c != 0:
        print("Нет корней")
    elif b == 0 and c == 0:
        print("Любое число x является корнем")
elif a !=0:
    if b != 0 and c != 0:
        d = (b * b) - (4 * a * c)
        if d > 0:
            x1 = (-b + (math.sqrt(d))) / (2 * a)
            print("x1 = ", x1)
            x2 = (-b - (math.sqrt(d))) / (2 * a)
            print("x2 = ", x2)
        elif d == 0:
            x1 = -b / (2 * a)
            print("x = ", x1)
        else:
            print("Уравнение имеет невещественные корни")
    elif b != 0 and c == 0:
        x1 = 0
        print("x1 = ", x1)
        x2 = -b / a
        print("x2 = ", x2)
    elif b == 0 and c == 0:
        x1 = sqrt(0 / a)
        print("x = ", x1)
    elif b == 0 and c != 0:
        x1 = math.sqrt(c/a)
        x2 = -(math.sqrt(c/a))
        print("x1 = ", x1, ", x2 = ", x2)
