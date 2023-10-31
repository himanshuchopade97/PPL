def largest_number():
    size=int(input("Enter the number of elements you want to input :"))
    numbers =[]
    for i in range(size):
        num=int(input("Enter the numbers : "))
        numbers.append(num)
    largest_num=max(numbers)
    return largest_num
print(largest_number(),"is the largest number.")