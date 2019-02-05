#Author: Amey.
T = int(input())
while(T > 0):
    n = int(input())
    ing = [0] * 26;
    for i in range(0, n):
        recipe = input()
        for j in recipe:
            if(ing[ord(j)-97] == i):
                ing[ord(j)-97] += 1;
    spl = 0
    for i in range(0, 26):
        if(ing[i] == n):
            spl += 1;
    print(spl)
    T -= 1;
