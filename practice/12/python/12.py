while True:
    try:
        n = int(input("Введите число, факториал которого хотите получить: "))
    except ValueError:
        print("Пожалуйста, введите корректные данные:")
        continue
    else:
        break
n1, f = 1, 1
while n1 <= n:
    f *= n1
    n1 += 1
print(f)