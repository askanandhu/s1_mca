l1=input("Enter the first list of numbers")
lst1=l1.split()
for i in range(0,len(lst1)):
	lst1[i]=int(lst1[i])
l2=input("Enter the second list of numbers")
lst2=l2.split()
for i in range(0,len(lst2)):
	lst2[i]=int(lst2[i])
if len(lst1) == len(lst2):
	print("The lists are of equal length")
else:
	print("The lists are of unequal length")

if sum(lst1) ==sum(lst2):
	print("The sum is same")
else:
	print("The sum is different")
for x in lst1:
	if x in lst2:
		print("Value occur in both")
		exit()
	else:
		print("value doesnot occur in both")
		exit()
