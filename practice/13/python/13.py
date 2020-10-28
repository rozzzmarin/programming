while True:
    try:
        n = int(input("Введите число, чтобы проверить, простое ли оно: "))
    except ValueError:
        print("Пожалуйста, введите корректные данные.")
        continue
    else:
        break
if n >= 2 and n <= 10**9:
	if (n == 2):
		print("Простое")
	for m in range (2, n):
	    if n % m != 0:
	        print("Простое")
	        break
	    else:
	        print("Составное")
	        break;
else:
    print("Пожалуйста, введите корректные данные.")