dias=input()
dias=int(dias)
carry1=1
carry2=1
carry3=1
carry4=1
if(dias<4):
    print(1)
else:
    for i in range (dias-3):
        carry4=carry3
        carry3=carry1+carry2+carry3
        carry1=carry2
        carry2=carry4
    print(carry3)
    