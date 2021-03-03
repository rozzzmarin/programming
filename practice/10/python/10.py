s, l1, r1, l2, r2 = map(int, input("Введите целое число s, границы диапазона s1, границы диапазона s2 через пробел: ").split(' '))
it_works = True

x1 = l1
x2 = 0

if x1 + r2 < s:
    x2 = r2
    if s > r1 + x2:
        print("Пожалуйста, введите корректные данные.")
        it_works = False
    else:
        x1 = s - r2
else:
    if s < l1 + l2:
        print("Пожалуйста, введите корректные данные.")
        it_works = False
    else:
        x2 = s - x1

if it_works:
    print("x1 = {}\nx2 = {}".format(x1, x2))
