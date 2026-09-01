class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hash = {}
        for i, x in enumerate(nums):
            hash[x] = i
        
        for i, x in enumerate(nums):
            diff = target - x
            if diff in hash and hash[diff] != i:
                return [i, hash[diff]]
        
        return []