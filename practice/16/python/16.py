n = int(input("Введите количество билетов:\n"))
found = 0
for numcount in range (n):
    tick = str(input("Введите номер билета/билетов:\n"))
    if (tick[0] == 'a') and (tick[4] == '5') and (tick[5] == '5') and (tick[6] == '6') and (tick[7] == '6') and (tick[8] == '1'):
        print(tick, end = ' ')
        break
    else:
        found += 1
if found == n:
    print("-1", end = ' ')