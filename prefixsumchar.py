s = "ABAACCA"
dic = {}
temp = {}
for i in range(len(s)):
    if s[i] in temp.keys():
        temp[s[i]] += 1
    else:
        temp[s[i]] = 1
    dic[i] = temp.copy()
print(dic)
