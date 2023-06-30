s = input()
count = 1
for i in range(len(s) - 1):
    if s[i] == s[i + 1]:
        count += 1
        if count >= 7:
            print("YES")
            exit()
    else:
        count = 1
print("NO")
