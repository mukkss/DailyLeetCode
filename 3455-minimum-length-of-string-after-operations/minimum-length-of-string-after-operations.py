class Solution:
    def minimumLength(self, s: str) -> int:
        from collections import Counter
        mp = Counter(s)
        ans = 0
        for char, count in mp.items():
            while count >= 3:
                count -= 2
            ans += count
        return ans