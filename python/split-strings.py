def solution(s):
    result = []
    if s:
        result = [s[i:i+2] for i in range(0, len(s), 2)]
        last = len(result) - 1
        if len(result[last]) < 2:
            result[last] += "_"
    return result
