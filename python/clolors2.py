color1=input("Enter the first colorlist   ")
color2=input("Enter the second colorlist   ")
l1=color1.split(" ")
l2=color2.split(" ")
ls1=set(l1)
ls2=set(l2)
print(ls1-ls2)

