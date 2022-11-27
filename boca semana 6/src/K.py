def factorial(n):
    fact = 1
    if n == 0:
        return 1
    else:
        for i in range(1, n + 1):
            fact = fact * i
    return fact

while(True):
    g = int(input())
    if(g == 0):
        break
    else:
        print(factorial(g))