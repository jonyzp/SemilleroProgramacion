def main():
    exit = False
    while not exit:
        arr = input().strip('\n')
        if  arr == "":
            exit = True
        else:
            arr = arr.split(' ')
            arrTemp = []
            for item in arr:
                arrTemp.append(int(item))
            arr = arrTemp
            #Ya esta el arreglo en enteros
            size = len(arr)
            for i in range(0,size-1):
                ant = arr[i]
                post = arr[i+1]


main()

