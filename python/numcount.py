n=int(input("enter a digit "))
count=0
while n!=0:
	n//=10
	count+=1
print("no: of digits is ",count)
