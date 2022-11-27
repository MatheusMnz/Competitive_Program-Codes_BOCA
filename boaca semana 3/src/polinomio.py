N = int(input())
real_age = 5
age = 0
cont_viagem = 0
lista1 = []

for i in range(1, N):
    if age and real_age not in lista1:
        age = int(real_age * 2)
        lista1.append(real_age) # 5
        cont_viagem += 1
        lista1.append(age) # 10
        cont_viagem += 1

    real_age += 1
    print(lista1)

if N % 2 == 1:
    print(age)
else:
    print(real_age)
