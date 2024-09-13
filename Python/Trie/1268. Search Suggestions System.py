""" 1268. Search Suggestions System
Difficulty: Medium
Submission Link: https://leetcode.com/problems/search-suggestions-system/submissions/1383574563/ """

class Solution(object):
    def suggestedProducts(self, products, sw):
        res = []
        products = sorted(products)
        temp_sw = ""
        
        for char in sw:
            temp_sw += char
            temp_res = []
            count = 0
            
            for word in products:
                if count == 3:
                    break
                if word.startswith(temp_sw):
                    temp_res.append(word)
                    count += 1
            res.append(temp_res)
            
        return res                 