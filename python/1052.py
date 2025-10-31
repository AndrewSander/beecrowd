meses=["January","February","March","April","May","June","July","August","September","October","November","December"]
while True:
    num=int(input())
    if num > 0 and num <= 12:
        break
print(meses[num-1])