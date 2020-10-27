a, mathsymbol, b = input("Введите первое число, знак арифметической операции и второе число(через пробел):").split( )
a, b = map(float, [a, b])
if((mathsymbol !='+') and (mathsymbol != '-') and (mathsymbol != '*') and (mathsymbol != '/')):
    print("Вводные данные некорректны или арифметический оператор не поддерживается.")
if (mathsymbol == '+'):
    print("Сумма чисел ", a, " и ", b, " равна ", a + b)
if (mathsymbol == '-'):
    print("Разность чисел ", a, " и ", b, " равна ", a - b)
if (mathsymbol == '*'):
    print("Произведение чисел ", a, " и ", b, " равно ", a * b)
if (mathsymbol == '/'):
    if (b != 0):
        print("Частное чисел ", a, " и ", b, " равно ", a / b)
    else:
        print("Недопустимое действие: попытка деления на нуль.")