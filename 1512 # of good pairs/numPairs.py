from collections import Counter


def numIdenticalPairs(nums):
    x = Counter(nums)
    return int(sum([i*(i-1)/2 for i in x.values() if i>1]))


