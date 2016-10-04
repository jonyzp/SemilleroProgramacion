def main():
    exit = False
    while not exit:
        arr = input().strip('\n')
        arr = arr.split(' ')
        arrTemp = []
        for item in arr:
            arrTemp.append(int(item))
        arr = arrTemp
        dimArrDisp = arr[0]
        dimArrOp = arr[1]
        acum = 0
        max = arr[2]
        arrDisp = []
        for i in range(0,dimArrDisp):
            arrDisp.append(input().strip('\n'))
        arrOps = []
        for i in range(0,dimArrOp):
            arrOps.append(input().strip('\n'))
        for item in arrOps:
            if arrPrendido.__contains__(item):
                arrApagado.append(item)
            else:
        arrPrendido = []
        arrApagado = []


main()
