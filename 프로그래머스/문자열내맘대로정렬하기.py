def solution(strings, n):
    strings.sort(key=lambda s: (s[n], s))
    return strings

print(solution(["sun", "bed", "car"], 1))
print(solution(["abce", "abcd", "cdx"], 2))