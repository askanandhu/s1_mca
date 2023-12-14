x=int(input("Enter the first number :"))
y=int(input("Enter the second number :"))
print("numbers before swapping ",x,"and " ,y)
x=x+y
y=x-y
x=x-y
print("numbers after swapping {} and {}".format(x,y))
