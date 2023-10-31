#LCM
def calc_lcm(num1, num2):
    if num1>num2:
        large=num1
    else:
        large=num2
    while(True):
        if (large%num1==0 and large%num2==0):
            lcm = large
            break
        large+=1
    return lcm
x1=int(input("Enter first number :"))
x2=int(input("Enter second number :"))
print(calc_lcm(x1,x2),"is the LCM of",x1,x2)
