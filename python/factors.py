def factor(n):
	for i in range(1,n):
		if (n%i)==0:
			print(i,end=" ")
factor(int(input("Enter a number")))

