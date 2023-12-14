def fib(n):
	terms=[]
	a,b=0,1
	for i in range(n):
		terms.append(a)
		a,b=b,a+b
	return terms
n=int(input("enter a number   "))
terms=fib(n)
print(f"fibonacci series for {n} terms is {terms}")

