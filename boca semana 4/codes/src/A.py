def factorial(n):
    fact = 1
    if n == 0:
        return 1
    else:
        for i in range(1, n + 1):
            fact = fact * i
    return fact


X = int(input())

# variável de controle
y = 0
# Criando a lista
L = []
# soma
sum = 0

while y != X:
    sum = 0
    number = factorial(X - y)
    print(number)

    while number/10:

        sum += int(number % 10)
        number = int(number / 10)

        # Caso a soma ultrapasse 1 digito
        if sum > 9:
            sum = 0
    # Encerra o while
    y += 1
    if not sum in L and sum != 0:
        L.append(sum)

print(L)
