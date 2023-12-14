def factorial(x):
	fact=1
	for x in range(1,x+1,1):
		fact*=x
	return fact


num=int(input("enter a number   "))
if num==0:
	print("factorial of 0 is 1")
else:
	print("factorial of ",num,"is",factorial(num)) 
