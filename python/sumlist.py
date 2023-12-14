l1=input("enter the elements in the list")
lst=l1.split()
for i in range(0,len(lst)):
	lst[i]=int(lst[i])
x=sum(lst)
print(x)
