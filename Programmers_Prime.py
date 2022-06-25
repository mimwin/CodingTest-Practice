from itertools import combinations
import math 
def solution(nums):
    answer = 0
    for i in combinations(nums, 3):
        sum_i = sum(i)
        for j in range(2, int(math.sqrt(sum_i)) + 1):
            if sum_i % j == 0:
                break
        else:
            answer += 1
    return answer