
def calcular(par):
    i = par[0]
    j = par[1]
    tempi = i
    tempj = j
    if i>j:
        aux = i
        i=j
        j=aux
    maxCycle=0
    cycleLen = 0
    while(i<=j):
        n=i
        cycleLen = 1
        while n != 1:
            if (n%2) == 1:
                n = 3*n+1
            else:
                n = n/2
            cycleLen += 1
        if cycleLen > maxCycle:
            maxCycle = cycleLen
        i += 1
    return maxCycle


exit = False
while not exit:
    par = input().strip('\n')
    par = par.split(' ')
    if par == '':

        exit = True
    else:
        arrTemp = []
        for item in par:
            arrTemp.append(int(item))
        par = arrTemp
        max = calcular(par)
        print(str(par[0]) + " " + str(par[1]) + " " + str(max))
