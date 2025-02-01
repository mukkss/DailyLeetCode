class Solution:
    def isArraySpecial(self, nums: list[int]) -> bool:
        for i in range(1, len(nums)):
            if not ((nums[i] ^ nums[i-1]) & 1):  # Parity check via XOR & last bit
                return False
        return True 