import random
while True:
    n = random.randint(1, 100)
    print("Угадайте случайное загаданное число (от 0 до 100):", end = '\n')
    for attempt in range (1,6):
        guess = int(input())
        if guess == n:
            print("Поздравляю! Вы угадали", end = '\n')
            break
        else:
            if attempt == 5:
                print("Вы проиграли. Было загадано:", n, end = '\n')
                break
            elif guess < n:
                print("Загаданное число больше", end = '\n')
            elif guess > n:
                print("Загаданное число меньше", end = '\n')
    repeat = int(input("Хотите начать сначала? (1 - ДА )\n"))   
    if repeat != 1: 
        break