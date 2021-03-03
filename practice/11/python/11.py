numberes = 1;
print("Введите число, которое хотите возвести в степень")
number = int(input())
print("Введите степень, в которую хотите возвести число:")
numpow = int(input())
if numpow == 0:
    print("Результат возведения в степень равен: 1")
elif numpow > 0:
    while numpow != 0:
        numberes *= number
        numpow -= 1
    print("Результат возведения в степень равен:", numberes)

elif numpow < 0:
    while numpow != 0:
        numberes *= number
        numpow += 1
    print("Результат возведения в степень равен:", 1/numberes)