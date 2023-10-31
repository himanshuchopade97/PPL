#menu driven exp 3
def largest_number():
    size=int(input("Enter the number of elements you want to input :"))
    numbers =[]
    for i in range(size):
        num=int(input("Enter the numbers : "))
        numbers.append(num)
    largest_num=max(numbers)
    return largest_num
def fact(n):
    if n==1 or n==0:
        return 1
    else:
        return n*fact(n-1)
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
def calc_hcf(num1,num2):
    if num1<num2:
        small=num1
    else:
        small=num2
    for i in range(1,small):
        if (num1%i==0) and (num2%i==0):
            hcf=i
    return hcf
while (True):
    print("Enter the choice:")
    choice=int(input("1. Largest Number\n2.Factorial\n3.LCM\n4.HCF\n5.Exit :"))
    if choice==1:
        print(largest_number(),"is the largest number.")
    elif choice==2:
        num=int(input("Enter the number :"))
        factorial=fact(num)
        print("Factorial of",num,"is",factorial)
    elif choice==3:
        x1=int(input("Enter first number :"))
        x2=int(input("Enter second number :"))  
        print(calc_lcm(x1,x2),"is the LCM of",x1,x2)
    elif choice==4:
        x1=int(input("Enter first number:"))
        x2=int(input("Enter second number:"))
        print(calc_hcf(x1,x2),"is the hcf of",x1,x2)
    elif choice==5:
        print("Exiting...")
        break
    else:
        print("Enter correct choice.")