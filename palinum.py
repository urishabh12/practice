#num = int(input())
#numlen = int(math.log10(num)+1)
def isPalindrome(self, x: 'int') -> 'bool':
    x = str(x)
    if x == x[::-1]:
        return True
    else:
        return False
        
