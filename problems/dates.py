import datetime
import sys
def main():
    #archivo = open("dates.in", "r")
    exit = False
    while not exit:
    #for arr in archivo:
        arr = input()
        #arr = arr.strip('\n')
        arr = arr.strip()
        arr = arr.split(' ')
        print(arr)
        arrTemp = []
        for item in arr:
            try:
                arrTemp.append(int(item))
            except:
                i = 0
        arr = arrTemp
        if(arr[0]==0 and arr[1] == 0 and arr[2] == 0 and arr[3] == 0):
            exit=True
            sys.exit(0)
        else:
            try:
                #print(arr)
                dias = datetime.timedelta(arr[0])
                date = datetime.datetime(arr[3], arr[2], arr[1])
                result = []
                result.append((date + dias).day)
                result.append((date + dias).month)
                result.append((date + dias).year)
                print(result[0], result[1], result[2])
                #print(result)
            except:
                i = 0
main()
