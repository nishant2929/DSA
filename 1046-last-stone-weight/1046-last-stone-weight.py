class Solution:
    def lastStoneWeight(self, s: List[int]) -> int:
        while len(s)>1:
            s.sort()
            s[-2]=abs(s[-2]-s[-1])
            s.remove(s[-1])
        return s[0]
            