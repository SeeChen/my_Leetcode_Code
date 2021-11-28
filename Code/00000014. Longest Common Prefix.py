'''
Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "".

Example 1:
Input: strs = ["flower","flow","flight"]
Output: "fl"

Example 2:
Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
'''
class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        res = ""
        if len(strs) == 0:
            return res
        s1 = min(strs)
        s2 = max(strs)
        for i in range(len(s1)):
            if s1[i] == s2[i]:
                res += s1[i]
            else:
                return res
        return res