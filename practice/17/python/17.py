places = 37
whole = [0] * places
incount, n, black, red = 0, 0, 0, 0
redarr = [1, 3, 5, 7, 9, 12, 14, 16, 18, 19, 21, 23, 25, 27, 30, 32, 34, 36]
for i in range (places):
    whole[i] = 0
while True:
	incount = int(input("Введите номер:\n"))
	if incount >= 0:
		whole[incount] += 1
		for i in range (18):
			if incount == redarr[i]:
				red += 1
				break
			elif i == 17:
			    black += 1
			    break
	else:
		break
	for i in range (places):
	   	if whole[i] > n:
	   	    n = whole[i]
	for i in range (places):
		if whole[i] == n:
		    print(i, end = ' ')
	print()
	for i in range (places):
		if whole[i] == 0:
		    print(i, end = ' ')
	print('\n', red, ' ', black, '\n', sep = '')
