fact=1
n=int(input("enter a number "))
if n==0:
	print("factorial of 0 is 1")
else:
	for i in range(1,n+1):
		fact*=i
	print("factorail of ",n," is ",fact)
