def lengthOfLongestSubstring(s):
    l=[]
    ans=0
    for i in s:
        if i not in l:
            l.append(i)
        else:
            ans=max(ans,len(l))
            while l[0]!=i:
                del l[0]
            del l[0]
            l.append(i)
    ans = max(ans,len(l))
    return ans