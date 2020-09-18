#з4 Обмен значениями

a = input()
b = input()
print('a, b:', a, b)
print('с дополнительной переменной:')
t = a
a = b
b = t
print ('a, b:', a, b)

print('a, b:', a,b)
print ('без дополнительной переменной:')
a, b = b, a
print ('a, b:', a, b)
