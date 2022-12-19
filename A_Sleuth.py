s = input().replace(' ', '')
if s[len(s) - 2] == 'a' or s[len(s) - 2] == 'e' or s[len(s) - 2] == 'o' or s[len(s) - 2] == 'u' or s[len(s) - 2] == 'y' or s[len(s) - 2] == 'A' or s[len(s) - 2] == 'E' or s[len(s) - 2] == 'O' or s[len(s) - 2] == 'U' or s[len(s) - 2] == 'Y':
    print('YES')
else:
    print('NO')