def get_palindrome(s):
    def beautify_score(s):
        res = 0
        single_letter = 0
        for i in range(len(s)//2 + 1 ):
            print(i, s[i], s[len(s)-1-i])
            if s[i] != s[len(s)-1-i]:
                return 0
            if s[i] == '?' and s[len(s)-1-i] == '?':
                res += 26
            if s[i] == '?' or s[len(s)-1-i] == '?':
                single_letter += 1
        return res + single_letter
    score = beautify_score(s)
    for i in range(len(s)):
        l = list(s)
        c = s[-1]
        for j in range(len(s)-1, 0, -1):
            l[j] = l[j-1]
        l[0] = c
        s = ''.join(l)
        score += beautify_score(s)
        print(s, beautify_score(s))

    return score    
s="a??"
print(get_palindrome(s))