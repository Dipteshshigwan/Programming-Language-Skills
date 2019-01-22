def armstrong(n):
    temp = n
    summ = 0
    count = len(str(n))   

    while n>0:
        unit = n%10
        summ = summ + unit**count
        n = n//10

    if summ == temp:
        print("Armstrong")
    else:
        print("Not Armstrong")
        
        
