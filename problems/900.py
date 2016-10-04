import datetime
import sys
def sacarTotales(arr):
    for line in arr:
        arrTemp = []
        for item in line:
            try:
                arrTemp.append(int(item))
            except:
                i = 0
        line = arrTemp
        if(line[0]==0 and line[1] == 0 and line[2] == 0 and line[3] == 0):
            return
        else:
            try:
                dias = datetime.timedelta(line[0])
                date = datetime.datetime(line[3], line[2], line[1])
                result = []
                result.append((date + dias).day)
                result.append((date + dias).month)
                result.append((date + dias).year)
                string = str(result[0]) + ' '+ str(result[1])+' ' + str(result[2])
                print(string)
                #print(result)
            except:
                i = 0

def main():
    arr = input().strip('\n')
    arr = arr.split('\n')
    sacarTotales(arr)

main()
