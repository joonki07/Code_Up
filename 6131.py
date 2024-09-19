a,b=input().split('x')
b,c=b.split('=')

a=int(a)
b=int(b)
c=int(c)

x=(c-b)/a
x=format(x,'.2f')

print(x)
