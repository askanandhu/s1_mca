x=int(input("enter the current year"))
y=int(input("enter the last year"))
for i in range(x,y+1,1):
	if (i % 400 ==0 or i % 100 != 0) and (i % 4 == 0 ):
		print(i)

	
