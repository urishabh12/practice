import time
l=['x' for x in range(100000)]
start=time.time()
for i in l:
    print(i,end='')
end=time.time()
print(end-start)