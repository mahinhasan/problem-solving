class Solution:
    def thirdMax(self, nums: List[int]) -> int:

        x = set(nums)

        x = list(x)
        x = sorted(x,reverse=True)
        if (len(x)) < 3:
            return(x[0])

        else:
            return(x[2])
