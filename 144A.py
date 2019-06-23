n=int(input())
seq=[int(x) for x in input().split()]
exmpl=seq[:]
exmpl.sort()
max,min=exmpl[-1],exmpl[0]
i_max,i_min=seq.index(max),(len(seq)-1-seq[::-1].index(min))
i_max_move=i_max
i_min_move=len(seq)-(i_min+1)
if i_max>i_min:
    count=(i_max_move+i_min_move)-1
else:
    count=i_max_move+i_min_move
print(count)