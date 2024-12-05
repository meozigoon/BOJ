def solution(slice, n):
    answer = slice
    cnt = 1
    while answer < n:
        cnt += 1
        answer += slice
    return cnt