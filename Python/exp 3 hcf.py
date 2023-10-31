def calc_hcf(num1,num2):
    if num1<num2:
        small=num1
    else:
        small=num2
    for i in range(1,small):
        if (num1%i==0) and (num2%i==0):
            hcf=i
    return hcf
x1=int(input("Enter first number:"))
x2=int(input("Enter second number:"))
print(calc_hcf(x1,x2),"is the hcf of",x1,x2)