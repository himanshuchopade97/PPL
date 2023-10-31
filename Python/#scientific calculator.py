#scientific calculator
import math
def add(num1,num2):
    return num1+num2
def sub(num1,num2):
    return num1-num2
def mul(num1,num2):
    return num1*num2
def div(num1,num2):
    if num2 == 0:
        return 0
    else:
        return num1/num2
def log(num):
    return math.log(num)
def sqrt(num):
    return math.sqrt(num)
def mod(num1,num2):
    if num2 == 0:
        return 0
    else:
        return num1 % num2
def sin(num):
    return math.sin(math.radians(num))
def cos(num):
    return math.cos(math.radians(num))
def tan(num):
    return math.tan(math.radians(num))
def power(num, power):
    return num**power
def inverse(num):
    if num == 0:
        print("Invalid. NUmber cannot be zero.")
    else:
        return 1/num
while (True):
    print("1.Addtion\n2.Subtractions\n3.Multiplications\n4.Divisions\n5.Logarithm\n6.Square Root\n7.Modulus\n8.Sine\n9.Cosine\n10.Tangent\n11.Power\n12.Inverse\n13.Exit")
    choice=int(input("Enter the function you want to calculate:"))
    if choice==1:
        print()
        num1=int(input("Enter number 1:"))
        num2=int(input("Enter number 2:"))
        print(add(num1,num2))
        print()
    elif choice==2:
        print()
        num1=int(input("Enter number 1:"))
        num2=int(input("Enter number 2:"))
        print(sub(num1,num2))
        print()
    elif choice==3:
        print()
        num1=int(input("Enter number 1:"))
        num2=int(input("Enter number 2:"))
        print(mul(num1,num2))
        print()
    elif choice==4:
        print()
        num1=int(input("Enter number 1:"))
        num2=int(input("Enter number 2:"))
        print(div(num1,num2))
        print()
    elif choice==5:
        print()
        num=int(input("Enter number :"))
        print(log(num))
        print()
    elif choice==6:
        print()
        num=int(input("Enter number :"))
        print(sqrt(num))
        print()
    elif choice==7:
        print()
        num1=int(input("Enter number 1:"))
        num2=int(input("Enter number 2:"))
        print(mod(num1,num2))
        print()
    elif choice==8:
        print()
        num=int(input("Enter angle in degree :"))
        print(sin(num))
        print()
    elif choice==9:
        print()
        num=int(input("Enter angle in degree :"))
        print(cos(num))
        print()
    elif choice==10:
        print()
        num=int(input("Enter angle in degree :"))
        print(tan(num))
        print()
    elif choice==11:
        print()
        num=int(input("Enter number :"))
        exponent=int(input("Enter power:"))
        print(power(num,exponent))
        print()
    elif choice==12:
        print()
        num=int(input("Enter number :"))
        print(inverse(num))
        print()
    elif choice==13:
        print("\nExiting...")
        break
    else:
        print("Enter correct choice.")