class Solution:
    def findComplement(self, num: int) -> int:
        binary = []
        while num!=1:
            binary.append(num%2)        #Converting to binary in reverse
            num = num // 2

        binary.append(num)
        binary  = [0 if i==1 else 1 for i in binary]  #Complementing

        complement = 0
        for i in  range(len(binary)):
            complement = complement + binary[i]*(2**i)  #Converting to Decimal

        return complement
