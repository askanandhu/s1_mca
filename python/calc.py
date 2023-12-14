
print("1.addition\n2.subtraction\n3.multiplication\n4.division")
n=int(input("enter your choice"))
x=float(input("enter the first number"))
y=float(input("enter the second number"))
if n==1:
	print("sum of ",x,"and",y," is ",x+y)
elif n==2:
	print("difference of ",x,"and",y," is ",x-y)
elif n==3:
	print("product of ",x,"and",y," is ",x*y)
elif n==4:
	print("quotient of ",x,"and",y," is ",x/y)
else:
	print("Invalid choice")
