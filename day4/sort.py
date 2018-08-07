l=[]
number=int(input("enter how many number="))
print("enter number")
for i in range(number):
    data=int(input())
    l.append(data)
print (l)
l.sort()
print("after sorting")
print (l)

    
# output:

# enter how many number=5
# enter number
# 2
# 6
# 2
# 8
# 9
# [2, 6, 2, 8, 9]
# after sorting
# [2, 2, 6, 8, 9]