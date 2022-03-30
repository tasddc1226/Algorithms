
string = input()
alpha = []
total = 0

for s in string:
    if s.isalpha():
        alpha.append(s)
    else:
        total += int(s)

alpha.sort()

if total != 0:
    alpha.append(str(total))  

print(''.join(alpha))
