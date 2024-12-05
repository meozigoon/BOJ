def solution(arr, delete_list):
    answer = []
    for i in arr:
        ch = False
        for j in delete_list:
            if i == j:
                ch = True
                break
        if not ch:
            answer.append(i)
    return answer