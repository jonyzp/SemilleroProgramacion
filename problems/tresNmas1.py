cont = 0
def calcularLength(num):
    global cont
    if num != 1:
        if num%2 == 1:
            num = 3*num+1
        else:
            num = num/2
        cont += calcularLength(num)

    else:
        return cont

result = []
par = input().strip('\n')
par = par.split(' ')
try:
    arrTemp = []
    for i in par:
        arrTemp.append(int(i))
    par = arrTemp

    for i in range(par[0],par[1]+1):
        print(i)
        cont = 0
        conteo = calcularLength(i)
        print(conteo)

    result.append(par[0], par[1])
except:
    i = 0
    print("Error")
