while True:
    try:
        n = int(input("Введите число: "))
    except ValueError:
        print("Пожалуйста, введите корректные данные.")
        continue
    else:
        break
if (n > 1):
    x = 1
    while (n != 1):
        n = n // 2
        x += 1
    print(x)
elif (n == 1):
    cout << "1\n"
elif (n == 0):
    cout << "0\n"
elif (n < 0):
    print("Пожалуйста, введите корректные данные.")