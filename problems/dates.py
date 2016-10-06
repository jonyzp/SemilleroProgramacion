import datetime
import sys
def main():
    while True:
        try:
            arr = input()
            arr = arr.strip()
            arr = arr.split(' ')
            arrTemp = []
            for item in arr:
                    arrTemp.append(int(item))
            arr = arrTemp
            if arr[0]==0 and arr[1] == 0 and arr[2] == 0 and arr[3] == 0:
                sys.exit(0)
            else:
                dias = datetime.timedelta(arr[0])
                date = datetime.timedelta(datetime.date(arr[3], arr[2], arr[1]).toordinal())
                result = []
                print(str(date))
                print(str(dias))
                suma = date + dias
                print(str(suma.days))
                print(datetime.date.max.toordinal())
                suma = datetime.date.fromordinal(suma.days)
                print(str(suma))
                result.append(suma.day)
                result.append(suma.month)
                result.append(suma.year)
                #print(result[0], result[1], result[2])
                print(str(result[0]) + " " + str(result[1]) + " " + str(result[2]) )
        except Exception as e:
            print(e.__str__())
main()
