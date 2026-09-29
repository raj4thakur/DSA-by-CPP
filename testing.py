list1=list(range(0,200,5))
print(list1)
frs=int(input("enter the first number: "))
snd=int(input("enter the sencond number: "))
opt=input("operation you want to perform: \n")

if opt=="add":
    print(frs+snd)
elif opt=="sub":
    print(frs-snd)
elif opt=="mult":
    print(frs*snd)
elif opt=="div":
    print(frs/snd)
list2=["raj","thakur","rohit",8,6,8,4,7,"5"]
lst=[]
lst2=[]
for i in list2:
    if type(i) is str:
        lst.append(i)
    elif type(i) is int:
        lst2.append(i)
print("string list",lst)
print("intiger list",lst2)
s="stringdefine"
print(s(0))
