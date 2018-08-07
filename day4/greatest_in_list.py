l=[]
number=int(input("enter how many number="))
print("enter number")
for i in range(number):
    data=int(input())
    l.append(data)
print(l)
print("greatest number is=",end="")
print(max(l))

# output:

# enter how many number=5
# enter number
# 26
# 35
# 21325
# 19
# 24
# [26, 35, 21325, 19, 24]
# greatest number is=21325

