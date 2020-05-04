class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        rn = list(ransomNote)
        mg = list(magazine)
        rn_di = {} 
        mg_di = {}
        flag = True
        for i in rn:                      #creating a hash map for each character of ransomNote 
            if i in rn_di:
                rn_di[i] = rn_di[i] + 1
            else:
                rn_di[i] = 1
        
        for i in mg:                      #creating a hash map for each character of magazine
            if i in mg_di:
                mg_di[i] = mg_di[i] + 1
            else:
                mg_di[i] = 1
        
        for i in rn_di:
            if not(i in list(mg_di.keys()) and rn_di[i]<=mg_di[i]): #checking if ransomNote char is present in magazine string and if occurances of 
                flag = False                                        #ransomNote characters is less than equal to corresponding magazine characters

        return flag
