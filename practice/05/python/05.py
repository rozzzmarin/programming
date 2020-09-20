#з5 Падение объекта

a = 9.8
x0, v0, t = map(float,input().split())
x = x0 + (v0 * t) - (a * t * t/2)
print(x)

