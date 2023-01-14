class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        if len(s)==0:
            return 0
        mx=0
        s=list(s)
        first=0
        second=0
        count=1
        for i in range(1,len(s)):
            if s[i] not in s[first:i]:
                count+=1
            else:
                mx=max(mx,count)
                count=i-s[first:i].index(s[i])-len(s[:i])+len(s[first:i])
                first=s[first:i].index(s[i])+1+len(s[:first])
        return max(mx,count)