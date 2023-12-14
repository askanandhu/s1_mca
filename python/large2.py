x=int(input("enter the first number "))
y=int(input("enter the second number "))
z=int(input("enter the third number "))
if (x==y) and (y==z) :
	print("all numbers are equal")
elif (x>=y) and (x>=z) :
	print(x," is the largest")
elif (y>=x) and (y>=z) :
	print(y ," is largest")
else :
	print(z ," is largest")
