s, l1, r1, l2, r2 = map(int, input("Введите целое число s, границы диапазона s1, границы диапазона s2 через пробел: ").split(' '))

if ((l1 <= r1) and (l2 <= r2)):
    if ((s <= (r1 + r2)) and (s >= (l1 + l2))):
        x1 = l1
        x2 = s - x1
        if ((l2 <= x2) and (s <= x1 + r2)):
            print(x1, x2, sep = ' ')
        elif ((l2 <= x2) and (s >= x1 + r2)):
            if (((l1 + abs(x2 - r2)) < r1) and ((r2 - abs(x2 - r2)) > l2)):
                x1 = (l1 + abs(x2 - r2))
                x2 = s - x1
                print(x1, x1, sep = ' ')
            else:
                print("-1", end = '\n')
    else:
        print ("-1", end = '\n')
else:
    print ("Пожалуйста, введите корректные данные.")
