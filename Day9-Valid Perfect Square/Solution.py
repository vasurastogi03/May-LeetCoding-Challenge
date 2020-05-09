1)
#Solving with Bitwise trick.

    def BitwiseTrick(self, num):
       root = 0
       bit = 1 << 15
       
       while bit > 0 :
           root |= bit
           if root > num // root:    
               root ^= bit                
           bit >>= 1        
       return root * root == num

2)
#Using Newton's Method
    def NewtonMethod(self, num):
        r = num
        while r*r > num:
            r = (r + num/r) // 2
        return r*r == num

3)
#Math Trick for Square number is 1+3+5+ ... +(2n-1)
    def Math(self, num):
        i = 1
        while (num>0):
            num -= i
            i += 2       
        return num == 0

4)
#Binary Search Method
import bisect
MAX_SQRT = 1<<16

class F:    
    def __getitem__(self, i):
        return i*i
    
class Solution:
    def isPerfectSquare(self, num: int) -> bool:
        return num == bisect.bisect_left(F(), num, 0, MAX_SQRT)**2

5)
#Linear Method (Naive) - For comparison
def Linear(self, num):
        i = 1
        while i ** 2 <= num:
            if i ** 2 == num:
                return True
            else:
                i += 1
        return False
