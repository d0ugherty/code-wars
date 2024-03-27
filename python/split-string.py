def solution(string):
    result = [string[i:i+2] for i in range(0, len(string), 2)]
    last = len(result)-1
    if len(result[last]) < 2 :
        result[last] += "_"
    return result

print(solution("IntereriorCrocodileAlligator"))
