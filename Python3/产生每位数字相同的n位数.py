import re
s = input()
S = re.sub('[ ,]', '', s)
i = 0
while(i<int(S[1])):
    print(S[0],end='')
    i=i+1
