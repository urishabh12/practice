l=[1,2,3,4,5,6,7,8,9,10]
tar=9
dic={}
for i, num in enumerate(l):
    if num in dic:
        print(dic[num], i)
    dic[tar-num] = i